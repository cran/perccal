% Generated by roxygen2 (4.1.1): do not edit by hand
% Please edit documentation in R/functions-code.R
\name{Cdboot_multi}
\alias{Cdboot_multi}
\title{Fast computation of internal double bootstrap calculations}
\usage{
Cdboot_multi(xxyy, lgridlo, lgridhi, B, B2, G)
}
\arguments{
\item{xxyy}{(n by p+1) matrix for X (design matrix) and response vector y.}

\item{lgridlo}{Lower quantile values of double bootstrap distribution to
obtain.}

\item{lgridhi}{Upper quantile values of double bootstrap distribution to
obtain.}

\item{B}{Number of 1st stage bootstrap samples.}

\item{B2}{Number of 2nd stage double bootstrap samples.}

\item{G}{Calculate quantile-based empirical coverage at this many grid
points}
}
\value{
theta_hat_boot first-level bootstrap estimates of all slope coefficients

theta_qtl_lgrid_lo (p+1 by B by G by 1) matrix for lower quantiles at
all grid points for all predictors over all bootstrap samples.

theta_qtl_lgrid_hi (p+1 by B by G by 1) matrix for upper quantiles at
all grid points for all predictors over all bootstrap samples.
}
\description{
This is the workhorse function of the package, speeding up computations
within double bootstrap routine.
}

