#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>

double function_fi(double x)
{
	if (x < -1 || x > 1)
	{
		throw - 1;
	}
	if (x <= 0)
	{
		return x * x * x + 3 * x * x; // x^3 + 3x^2
	}
	else
	{
		return -x * x * x + 3 * x * x; // -x^3 + 3x^2
	}
}

double function_dfi(double x)
{
	if (x < -1 || x > 1)
	{
		throw - 1;
	}
	if (x <= 0)
	{
		return 3 * x * x + 6 * x; // 3x^2 + 6x
	}
	else
	{
		return -3 * x * x + 6 * x; // -3x^2 + 6x
	}
}

double function_ddfi(double x)
{
	if (x < -1 || x > 1)
	{
		throw - 1;
	}
	if (x <= 0)
	{
		return 6 * x + 6; // 6x + 6
	}
	else
	{
		return -6 * x + 6; // -6x + 6
	}
}

double function_f(double x)
{
	if (x < 0 || x >2)
	{
		throw - 1;
	}
	double res = sin(x + 1) / (x + 1);
	return res;
}

double function_df(double x)
{
	if (x < 0 || x >2)
	{
		throw - 1;
	}
	double tmp = (x + 1) * cos(x + 1) - sin(x + 1);
	return tmp / (x * x + 2 * x + 1);
}

double function_ddf(double x)
{
	if (x < 0 || x >2)
	{
		throw - 1;
	}
	double tmp = (x * x + 2 * x - 1) * sin(x + 1) + 2 * (x + 1) * cos(x + 1);
	return -tmp / (x * x * x + 3 * x * x + 3 * x + 1);
}

double function_f_cos10(double x)
{
	if (x < 0 || x >2)
	{
		throw - 1;
	}
	double res = sin(x + 1) / (x + 1) + cos(10 * x);
	return res;
}

double function_df_dcos10(double x)
{
	if (x < 0 || x >2)
	{
		throw - 1;
	}
	double tmp = (x + 1) * cos(x + 1) - sin(x + 1);
	return tmp / (x * x + 2 * x + 1) - 10 * sin(10 * x);
}

double function_ddf_ddcos10(double x)
{
	if (x < 0 || x >2)
	{
		throw - 1;
	}
	double tmp = (x * x + 2 * x - 1) * sin(x + 1) + 2 * (x + 1) * cos(x + 1);
	return -tmp / (x * x * x + 3 * x * x + 3 * x + 1) - 100 * cos(10 * x);
}

double Spline(double x, int n)
{
	double xmin = -1;
	double xmax = 1;
	double h = (xmax - xmin) / n;
	std::vector<double> y;
	std::vector<double> alpha;
	std::vector<double> beta;


	y.push_back(1);
	alpha.push_back(0);
	beta.push_back(0);

	for (int i = 1; i < n; i++)
	{
		y.push_back(4 * h + h * alpha.back());
		alpha.push_back(-h / y.back());
		double right = (6.0 / h) * (function_fi(xmin + i * h + h) - 2 * function_fi(xmin + i * h) + function_fi(xmin + i * h - h));
		beta.push_back((right - h * beta.back()) / y.back());
	}
	y.push_back(1);
	beta.push_back(0);

	std::vector<double> c(n + 1);
	std::vector<double> a(n + 1);
	std::vector<double> b(n + 1);
	std::vector<double> d(n + 1);

	c[n] = beta[n];
	// c
	for (int i = n - 1; i >= 0; i--)
	{
		c[i] = alpha[i] * c[i + 1] + beta[i];
	}
	// a
	for (int i = 1; i <= n; i++)
	{
		a[i] = function_fi(xmin + i * h);
	}
	// d
	for (int i = 1; i <= n; i++)
	{
		d[i] = (c[i] - c[i - 1]) / h;
	}
	// b
	for (int i = 1; i <= n; i++)
	{
		b[i] = (function_fi(xmin + i * h) - function_fi(xmin + i * h - h)) / h + c[i] * (h / 3.0) + c[i - 1] * (h / 6.0);
	}

	double res;
	for (int i = 1; i <= n; i++)
	{
		if ((x >= xmin + i * h - h) && (x <= xmin + i * h))
		{
			res = a[i] + b[i] * (x - xmin - i * h) + 0.5 * c[i] * (x - xmin - i * h) * (x - xmin - i * h) + (d[i] / 6.0) * (x - xmin - i * h) * (x - xmin - i * h) * (x - xmin - i * h);
			break;
		}
	}

	//проверка c
	/*
	for (int i = 0; i <= n; i++)
	{
		std::cout << c[i] << " |";
	}
	*/

	return res;
}