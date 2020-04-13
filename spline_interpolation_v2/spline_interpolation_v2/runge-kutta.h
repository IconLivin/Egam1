#pragma once
#include <cmath>
#include <vector>

double func(double v, double x, double lambda) {
	return -1 * (lambda * v + sin(x));
}

void runge_kutta(double begin, double end, double h, double lambda, double x0dash, std::vector<double> &res) {
	double _dx = begin, _dv = x0dash;
	for (double i = begin; i < end; i += h) {
		res.push_back(_dx);
		double dx1 = h * _dv;
		double dv1 = h * func(_dv, _dx, lambda);

		double dx2 = h * (_dv + dv1 / 2);
		double dv2 = h * func(_dv + dv1 / 2, _dx + dx1 / 2, lambda);

		double dx3 = h * (_dv + dv2 / 2);
		double dv3 = h * func(_dv + dv2 / 2, _dx + dx2 / 2, lambda);

		double dx4 = h * (_dv + dv3);
		double dv4 = h * func(_dv + dv3, _dx + dx3, lambda);

		double dx = (dx1 + 2 * dx2 + 2 * dx3 + dx4) / 6;
		double dv = (dv1 + 2 * dv2 + 2 * dv3 + dv4) / 6;
		_dx += dx;
		_dv += dv;
	}
	res.push_back(_dv);

}