// __BEGIN_LICENSE__
// Copyright (C) 2006, 2007 United States Government as represented by
// the Administrator of the National Aeronautics and Space Administration.
// All Rights Reserved.
// __END_LICENSE__


template void vw::math::complete_svd < AMatrixT,UMatrixT,SingularValuesT,VTMatrixT > (AMatrixT&, UMatrixT&, SingularValuesT&, VTMatrixT&);
template QuaternionT vw::math::conj < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template FuncT::domain_type vw::math::conjugate_gradient < FuncT,StepT > (const FuncT&, const FuncT::domain_type&, const StepT&, int);
template QuaternionT vw::math::cos < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template QuaternionT vw::math::cosh < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template vw::math::Vector<vw::ProductType<Vector1T::value_type, Vector2T::value_type>::type, 3> vw::math::cross_prod < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::Vector<VectorT::value_type, 0> vw::math::dehom < VectorT > (const vw::math::VectorBase<VectorT>&);
template MatrixT::value_type vw::math::det < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
//template vw::math::Matrix<MatrixT::value_type, 0, 0> vw::math::diagonal_matrix < VectorT > (const VectorT&);
template vw::ProductType<Vector1T::value_type, Vector2T::value_type>::type vw::math::dot_prod < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template void vw::math::eigen < AMatrixT,EigenvaluesT,VMatrixT > (AMatrixT&, EigenvaluesT&, VMatrixT&);
template void vw::math::eigen < MatrixT,EigenvaluesT > (const MatrixT&, EigenvaluesT&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgDifferenceFunctor> vw::math::elem_diff < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgDifferenceFunctor<ScalarT> > >::type vw::math::elem_diff < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValDifferenceFunctor<ScalarT> > >::type vw::math::elem_diff < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgDifferenceFunctor<ScalarT> > >::type vw::math::elem_diff < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValDifferenceFunctor<ScalarT> > >::type vw::math::elem_diff < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgDifferenceFunctor> vw::math::elem_diff < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgEqualityFunctor> vw::math::elem_eq < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgEqualityFunctor<ScalarT> > >::type vw::math::elem_eq < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValEqualityFunctor<ScalarT> > >::type vw::math::elem_eq < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgEqualityFunctor<ScalarT> > >::type vw::math::elem_eq < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValEqualityFunctor<ScalarT> > >::type vw::math::elem_eq < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgEqualityFunctor> vw::math::elem_eq < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgGreaterThanFunctor> vw::math::elem_gt < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgGreaterThanFunctor<ScalarT> > >::type vw::math::elem_gt < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValGreaterThanFunctor<ScalarT> > >::type vw::math::elem_gt < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgGreaterThanFunctor<ScalarT> > >::type vw::math::elem_gt < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValGreaterThanFunctor<ScalarT> > >::type vw::math::elem_gt < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgGreaterThanFunctor> vw::math::elem_gt < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgGreaterThanOrEqualFunctor> vw::math::elem_gte < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgGreaterThanOrEqualFunctor<ScalarT> > >::type vw::math::elem_gte < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValGreaterThanOrEqualFunctor<ScalarT> > >::type vw::math::elem_gte < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgGreaterThanOrEqualFunctor<ScalarT> > >::type vw::math::elem_gte < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValGreaterThanOrEqualFunctor<ScalarT> > >::type vw::math::elem_gte < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgGreaterThanOrEqualFunctor> vw::math::elem_gte < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgLessThanFunctor> vw::math::elem_lt < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgLessThanFunctor<ScalarT> > >::type vw::math::elem_lt < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValLessThanFunctor<ScalarT> > >::type vw::math::elem_lt < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgLessThanFunctor<ScalarT> > >::type vw::math::elem_lt < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValLessThanFunctor<ScalarT> > >::type vw::math::elem_lt < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgLessThanFunctor> vw::math::elem_lt < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgLessThanOrEqualFunctor> vw::math::elem_lte < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgLessThanOrEqualFunctor<ScalarT> > >::type vw::math::elem_lte < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValLessThanOrEqualFunctor<ScalarT> > >::type vw::math::elem_lte < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgLessThanOrEqualFunctor<ScalarT> > >::type vw::math::elem_lte < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValLessThanOrEqualFunctor<ScalarT> > >::type vw::math::elem_lte < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgLessThanOrEqualFunctor> vw::math::elem_lte < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgInequalityFunctor> vw::math::elem_neq < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgInequalityFunctor<ScalarT> > >::type vw::math::elem_neq < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValInequalityFunctor<ScalarT> > >::type vw::math::elem_neq < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgInequalityFunctor<ScalarT> > >::type vw::math::elem_neq < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValInequalityFunctor<ScalarT> > >::type vw::math::elem_neq < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgInequalityFunctor> vw::math::elem_neq < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template BBoxT vw::math::elem_prod < BBoxT,RealT,DimN,VectorT > (const vw::math::BBoxBase<BBoxT, RealT, DimN>&, const vw::math::VectorBase<VectorT>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgProductFunctor> vw::math::elem_prod < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgProductFunctor<ScalarT> > >::type vw::math::elem_prod < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValProductFunctor<ScalarT> > >::type vw::math::elem_prod < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgProductFunctor<ScalarT> > >::type vw::math::elem_prod < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValProductFunctor<ScalarT> > >::type vw::math::elem_prod < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgProductFunctor> vw::math::elem_prod < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template BBoxT vw::math::elem_quot < BBoxT,RealT,DimN,VectorT > (const vw::math::BBoxBase<BBoxT, RealT, DimN>&, const vw::math::VectorBase<VectorT>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgQuotientFunctor> vw::math::elem_quot < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgQuotientFunctor<ScalarT> > >::type vw::math::elem_quot < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValQuotientFunctor<ScalarT> > >::type vw::math::elem_quot < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgQuotientFunctor<ScalarT> > >::type vw::math::elem_quot < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValQuotientFunctor<ScalarT> > >::type vw::math::elem_quot < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgQuotientFunctor> vw::math::elem_quot < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgSumFunctor> vw::math::elem_sum < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<ScalarT>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValSumFunctor<ScalarT> > >::type vw::math::elem_sum < MatrixT,ScalarT > (const vw::math::MatrixBase<MatrixT>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgSumFunctor<ScalarT> > >::type vw::math::elem_sum < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValSumFunctor<ScalarT> > >::type vw::math::elem_sum < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgSumFunctor> vw::math::elem_sum < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<ScalarT>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValSumFunctor<ScalarT> > >::type vw::math::elem_sum < VectorT,ScalarT > (const vw::math::VectorBase<VectorT>&, ScalarT);
template bool vw::math::equal < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&, double);
template bool vw::math::equal < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&, double);
//template vw::math::Matrix<MatrixT::value_type, vw::math::MatrixRows::value, vw::math::MatrixCols::value> vw::math::eval < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
//template vw::math::Vector<VectorT::value_type, vw::math::VectorSize::value> vw::math::eval < VectorT > (const vw::math::VectorBase<VectorT>&);
template QuaternionT vw::math::exp < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template void vw::math::fill < MatrixT,ValT > (vw::math::MatrixBase<MatrixT>&, const ValT&);
template void vw::math::fill < VectorT,ValT > (vw::math::VectorBase<VectorT>&, const ValT&);
template vw::math::Vector<VectorT::value_type, 0> vw::math::hom < VectorT > (const vw::math::VectorBase<VectorT>&);
template vw::math::Matrix<double, DimN, DimN> vw::math::identity_matrix < DimN > ();
template vw::math::Vector<QuaternionT::value_type, 3> vw::math::imag < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template vw::math::VectorUnaryFunc<VectorT, vw::math::ArgImagFunctor> vw::math::imag < VectorT > (const vw::math::VectorBase<VectorT>&);
template T vw::math::impl::mod < T > (T, T);
template unsigned int vw::math::index_norm_inf < VectorT > (const vw::math::VectorBase<VectorT>&);
template vw::math::Matrix<MatrixT::value_type, 0, 0> vw::math::inverse < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template QuaternionT vw::math::inverse < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template vw::math::Vector<vw::PromoteType<AMatrixT::value_type, SingularValuesT::value_type>::type, 0> vw::math::least_squares < AMatrixT,BVectorT > (AMatrixT&, BVectorT&, double);
template ImplT::domain_type vw::math::levenberg_marquardt < ImplT > (const vw::math::LeastSquaresModelBase<ImplT>&, const ImplT::domain_type&, const ImplT::result_type&, int&, double, double, double);
//template vw::math::MatrixProxy<ContainerT::value_type, 0, 0> vw::math::matrix_proxy < ContainerT > (const ContainerT&);
template vw::math::MatrixProxy<ElemT, 0, 0> vw::math::matrix_proxy < DataT > (DataT*, int, int);
template vw::math::Matrix<vw::PromoteType<AMatrixT::value_type, SingularValuesT::value_type>::type, 0, 0> vw::math::multi_solve_symmetric < AMatrixT,BMatrixT > (AMatrixT&, BMatrixT&);
template void vw::math::multi_solve_symmetric_nocopy < AMatrixT,BMatrixT > (AMatrixT&, BMatrixT&);
template DomainT vw::math::nelder_mead < FuncT,DomainT > (const FuncT&, const DomainT&, int&, bool, int, double, int);
template DomainT vw::math::nelder_mead < FuncT,DomainT,ScaleT > (const FuncT&, const DomainT&, const ScaleT&, int&, bool, int, double, int);
template vw::math::MatrixNoTmp<MatrixT> vw::math::no_tmp < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template vw::math::VectorNoTmp<VectorT> vw::math::no_tmp < VectorT > (const vw::math::VectorBase<VectorT>&);
template double vw::math::norm_1 < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template QuaternionT::value_type vw::math::norm_1 < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template VectorT::value_type vw::math::norm_1 < VectorT > (const vw::math::VectorBase<VectorT>&);
template QuaternionT::value_type vw::math::norm_2 < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template double vw::math::norm_2 < VectorT > (const vw::math::VectorBase<VectorT>&);
template double vw::math::norm_2_sqr < VectorT > (const vw::math::VectorBase<VectorT>&);
template double vw::math::norm_frobenius < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template double vw::math::norm_frobenius_sqr < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template double vw::math::norm_inf < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template QuaternionT::value_type vw::math::norm_inf < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template VectorT::value_type vw::math::norm_inf < VectorT > (const vw::math::VectorBase<VectorT>&);
template QuaternionT vw::math::normalize < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template vw::math::VectorUnaryFunc<VectorT, vw::ArgValQuotientFunctor<double> > vw::math::normalize < VectorT > (const vw::math::VectorBase<VectorT>&);
template bool vw::math::not_equal < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&, double);
template bool vw::math::not_equal < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&, double);
template bool vw::math::operator!= < BBoxT1,RealT1,DimN1,BBoxT2,RealT2,DimN2 > (const vw::math::BBoxBase<BBoxT, RealT, DimN>&, const vw::math::BBoxBase<BBoxT2, RealT2, DimN2>&);
template bool vw::math::operator!= < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template bool vw::math::operator!= < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template BBoxT vw::math::operator* < BBoxT,RealT,DimN,ScalarT > (ScalarT, const vw::math::BBoxBase<BBoxT, RealT, DimN>&);
template BBoxT vw::math::operator* < BBoxT,RealT,DimN,ScalarT > (const vw::math::BBoxBase<BBoxT, RealT, DimN>&, ScalarT);
template vw::math::MatrixMatrixProduct<Matrix1T, Matrix2T, false, false> vw::math::operator* < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template vw::math::MatrixVectorProduct<MatrixT, VectorT, false> vw::math::operator* < MatrixT,VectorT > (const vw::math::MatrixBase<MatrixT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::MatrixVectorProduct<MatrixT, VectorT, true> vw::math::operator* < MatrixT,VectorT > (const vw::math::MatrixTranspose<MatrixT>&, const vw::math::VectorBase<Vector2T>&);
template QuaternionT vw::math::operator* < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&, const vw::math::QuaternionBase<QuaternionT>&);
template boost::enable_if<vw::IsScalar<ScalarT>, QuaternionT>::type vw::math::operator* < QuaternionT,ScalarT > (const vw::math::QuaternionBase<QuaternionT>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ValArgProductFunctor<ScalarT> > >::type vw::math::operator* < ScalarT,MatrixT > (ScalarT, const vw::math::MatrixBase<Matrix2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValProductFunctor<ScalarT> > >::type vw::math::operator* < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ValArgProductFunctor<ScalarT> > >::type vw::math::operator* < ScalarT,VectorT > (ScalarT, const vw::math::VectorBase<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorTranspose<const vw::math::VectorUnaryFunc<VectorT, vw::ValArgProductFunctor<ScalarT> > > >::type vw::math::operator* < ScalarT,VectorT > (ScalarT, const vw::math::VectorTranspose<Vector2T>&);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValProductFunctor<ScalarT> > >::type vw::math::operator* < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorTranspose<const vw::math::VectorUnaryFunc<VectorT, vw::ArgValProductFunctor<ScalarT> > > >::type vw::math::operator* < ScalarT,VectorT > (const vw::math::VectorTranspose<Vector2T>&, ScalarT);
//template vw::math::Matrix<vw::ProductType<Vector1T::value_type, Vector2T::value_type>::type, (vw::math::VectorSize::value ?  vw::math::VectorSize::value : 0), (vw::math::VectorSize::value ?  vw::math::VectorSize::value : 0)> vw::math::operator* < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorTranspose<Vector2T>&);
template vw::ProductType<Vector1T::value_type, Vector2T::value_type>::type vw::math::operator* < Vector1T,Vector2T > (const vw::math::VectorTranspose<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::VectorTranspose<const vw::math::MatrixVectorProduct<MatrixT, VectorT, true> > vw::math::operator* < VectorT,MatrixT > (const vw::math::VectorTranspose<VectorT>&, const vw::math::MatrixBase<Matrix2T>&);
template BBoxT vw::math::operator+ < BBoxT,RealT,DimN,VectorT > (const vw::math::BBoxBase<BBoxT, RealT, DimN>&, const vw::math::VectorBase<VectorT>&);
template BBoxT vw::math::operator+ < BBoxT,RealT,DimN,VectorT > (const vw::math::VectorBase<VectorT>&, const vw::math::BBoxBase<BBoxT, RealT, DimN>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgSumFunctor> vw::math::operator+ < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template QuaternionT vw::math::operator+ < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&, const vw::math::QuaternionBase<QuaternionT>&);
template boost::enable_if<vw::IsScalar<ScalarT>, QuaternionT>::type vw::math::operator+ < QuaternionT,ScalarT > (const vw::math::QuaternionBase<QuaternionT>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgSumFunctor> vw::math::operator+ < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::VectorTranspose<const vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgSumFunctor> > vw::math::operator+ < Vector1T,Vector2T > (const vw::math::VectorTranspose<VectorT>&, const vw::math::VectorTranspose<Vector2T>&);
template BBoxT vw::math::operator- < BBoxT,RealT,DimN,VectorT > (const vw::math::BBoxBase<BBoxT, RealT, DimN>&, const vw::math::VectorBase<VectorT>&);
template vw::math::MatrixBinaryFunc<Matrix1T, Matrix2T, vw::ArgArgDifferenceFunctor> vw::math::operator- < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template vw::math::MatrixUnaryFunc<MatrixT, vw::ArgNegationFunctor> vw::math::operator- < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template QuaternionT vw::math::operator- < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template QuaternionT vw::math::operator- < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&, const vw::math::QuaternionBase<QuaternionT>&);
template boost::enable_if<vw::IsScalar<ScalarT>, QuaternionT>::type vw::math::operator- < QuaternionT,ScalarT > (const vw::math::QuaternionBase<QuaternionT>&, ScalarT);
template vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgDifferenceFunctor> vw::math::operator- < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template vw::math::VectorTranspose<const vw::math::VectorBinaryFunc<Vector1T, Vector2T, vw::ArgArgDifferenceFunctor> > vw::math::operator- < Vector1T,Vector2T > (const vw::math::VectorTranspose<VectorT>&, const vw::math::VectorTranspose<Vector2T>&);
template vw::math::VectorUnaryFunc<VectorT, vw::ArgNegationFunctor> vw::math::operator- < VectorT > (const vw::math::VectorBase<VectorT>&);
template vw::math::VectorTranspose<const vw::math::VectorUnaryFunc<VectorT, vw::ArgNegationFunctor> > vw::math::operator- < VectorT > (const vw::math::VectorTranspose<VectorT>&);
template BBoxT vw::math::operator/ < BBoxT,RealT,DimN,ScalarT > (const vw::math::BBoxBase<BBoxT, RealT, DimN>&, ScalarT);
template QuaternionT vw::math::operator/ < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&, const vw::math::QuaternionBase<QuaternionT>&);
template boost::enable_if<vw::IsScalar<ScalarT>, QuaternionT>::type vw::math::operator/ < QuaternionT,ScalarT > (const vw::math::QuaternionBase<QuaternionT>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::MatrixUnaryFunc<MatrixT, vw::ArgValQuotientFunctor<ScalarT> > >::type vw::math::operator/ < ScalarT,MatrixT > (const vw::math::MatrixBase<Matrix2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorUnaryFunc<VectorT, vw::ArgValQuotientFunctor<ScalarT> > >::type vw::math::operator/ < ScalarT,VectorT > (const vw::math::VectorBase<Vector2T>&, ScalarT);
template boost::enable_if<vw::IsScalar<T>, vw::math::VectorTranspose<const vw::math::VectorUnaryFunc<VectorT, vw::ArgValQuotientFunctor<ScalarT> > > >::type vw::math::operator/ < ScalarT,VectorT > (const vw::math::VectorTranspose<Vector2T>&, ScalarT);
template bool vw::math::operator== < BBoxT1,RealT1,DimN1,BBoxT2,RealT2,DimN2 > (const vw::math::BBoxBase<BBoxT, RealT, DimN>&, const vw::math::BBoxBase<BBoxT2, RealT2, DimN2>&);
template bool vw::math::operator== < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template bool vw::math::operator== < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&, const vw::math::QuaternionBase<QuaternionT>&);
template bool vw::math::operator== < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
//template vw::math::Matrix<vw::ProductType<Vector1T::value_type, Vector2T::value_type>::type, (vw::math::VectorSize::value ?  vw::math::VectorSize::value : 0), (vw::math::VectorSize::value ?  vw::math::VectorSize::value : 0)> vw::math::outer_prod < Vector1T,Vector2T > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template QuaternionT vw::math::pow < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&, int);
template void vw::math::print_file < ForwardIterator > (ForwardIterator, ForwardIterator);
//template void vw::math::print_record < ForwardIterator > (ForwardIterator, ForwardIterator);
template MatrixT::value_type vw::math::prod < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template VectorT::value_type vw::math::prod < VectorT > (const vw::math::VectorBase<VectorT>&);
template vw::math::Matrix<MatrixT::value_type, 0, 0> vw::math::pseudoinverse < AMatrixT > (AMatrixT&, double);
template void vw::math::qrd < AMatrixT,QMatrixT,RMatrixT > (const AMatrixT&, QMatrixT&, RMatrixT&);
template QuaternionT::value_type vw::math::real < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template vw::math::VectorUnaryFunc<VectorT, vw::math::ArgRealFunctor> vw::math::real < VectorT > (const vw::math::VectorBase<VectorT>&);
template vw::math::Quaternion<double> vw::math::relative_orientation < Matrix1T,Matrix2T > (const vw::math::MatrixBase<MatrixT>&, const vw::math::MatrixBase<Matrix2T>&);
template void vw::math::rqd < AMatrixT,QMatrixT,RMatrixT > (const AMatrixT&, RMatrixT&, QMatrixT&);
template vw::math::MatrixCol<const MatrixT> vw::math::select_col < MatrixT > (const vw::math::MatrixBase<MatrixT>&, unsigned int);
template vw::math::MatrixCol<MatrixT> vw::math::select_col < MatrixT > (vw::math::MatrixBase<MatrixT>&, unsigned int);
template vw::math::MatrixRow<const MatrixT> vw::math::select_row < MatrixT > (const vw::math::MatrixBase<MatrixT>&, unsigned int);
template vw::math::MatrixRow<MatrixT> vw::math::select_row < MatrixT > (vw::math::MatrixBase<MatrixT>&, unsigned int);
template QuaternionT vw::math::sin < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template QuaternionT vw::math::sinh < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template vw::math::Vector<vw::PromoteType<AMatrixT::value_type, SingularValuesT::value_type>::type, 0> vw::math::solve < AMatrixT,BVectorT > (AMatrixT&, BVectorT&);
template vw::math::Vector<vw::PromoteType<AMatrixT::value_type, SingularValuesT::value_type>::type, 0> vw::math::solve_symmetric < AMatrixT,BVectorT > (AMatrixT&, BVectorT&);
template void vw::math::solve_symmetric_nocopy < AMatrixT,BVectorT > (AMatrixT&, BVectorT&);
template FuncT::domain_type vw::math::steepest_descent < FuncT,StepT > (const FuncT&, const FuncT::domain_type&, const StepT&, int);
template vw::math::SubMatrix<const MatrixT> vw::math::submatrix < MatrixT > (const vw::math::MatrixBase<MatrixT>&, unsigned int, unsigned int, unsigned int, unsigned int);
template vw::math::SubMatrix<MatrixT> vw::math::submatrix < MatrixT > (vw::math::MatrixBase<MatrixT>&, unsigned int, unsigned int, unsigned int, unsigned int);
template vw::math::SubVector<const VectorT> vw::math::subvector < VectorT > (const vw::math::VectorBase<VectorT>&, unsigned int, unsigned int);
template vw::math::SubVector<VectorT> vw::math::subvector < VectorT > (vw::math::VectorBase<VectorT>&, unsigned int, unsigned int);
template MatrixT::value_type vw::math::sum < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template VectorT::value_type vw::math::sum < VectorT > (const vw::math::VectorBase<VectorT>&);
template void vw::math::svd < AMatrixT,SingularValuesT > (const AMatrixT&, SingularValuesT&);
template void vw::math::svd < AMatrixT,UMatrixT,SingularValuesT,VTMatrixT > (const AMatrixT&, UMatrixT&, SingularValuesT&, VTMatrixT&);
template QuaternionT vw::math::tan < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template QuaternionT vw::math::tanh < QuaternionT > (const vw::math::QuaternionBase<QuaternionT>&);
template MatrixT::value_type vw::math::trace < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template vw::math::MatrixTranspose<const MatrixT> vw::math::transpose < MatrixT > (const vw::math::MatrixBase<MatrixT>&);
template vw::math::MatrixTranspose<MatrixT> vw::math::transpose < MatrixT > (vw::math::MatrixBase<MatrixT>&);
template vw::math::VectorTranspose<const VectorT> vw::math::transpose < VectorT > (const vw::math::VectorBase<VectorT>&);
template vw::math::VectorTranspose<VectorT> vw::math::transpose < VectorT > (vw::math::VectorBase<VectorT>&);
template VectorT1 vw::math::vector_containment_comparison::max < VectorT1,VectorT2 > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template VectorT1 vw::math::vector_containment_comparison::min < VectorT1,VectorT2 > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template bool vw::math::vector_containment_comparison::operator< < VectorT1,VectorT2 > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template bool vw::math::vector_containment_comparison::operator<= < VectorT1,VectorT2 > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template bool vw::math::vector_containment_comparison::operator> < VectorT1,VectorT2 > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template bool vw::math::vector_containment_comparison::operator>= < VectorT1,VectorT2 > (const vw::math::VectorBase<VectorT>&, const vw::math::VectorBase<Vector2T>&);
template FittingFuncT::result_type vw::math::ransac < ContainerT1,ContainerT2,FittingFuncT,ErrorFuncT > (const std::vector<CharT, std::allocator<_CharT> >&, const std::vector<KernelT, std::allocator<_T2> >&, const FittingFuncT&, const ErrorFuncT&, double);
//template vw::math::VectorProxy<ElemT, 0> vw::math::vector_proxy < DataT > (DataT*, int);
