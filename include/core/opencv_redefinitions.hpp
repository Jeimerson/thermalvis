/*! \file	opencv_redefinitions.hpp
 *  \brief	To deal with OpenCV version 2 - 3 compatibility.
*/

#ifndef THERMALVIS_OPENCV_REDEFINITIONS_H
#define THERMALVIS_OPENCV_REDEFINITIONS_H

#ifdef _OPENCV_VERSION_3_PLUS_
#define RGB2GRAY cv::COLOR_RGB2GRAY
#define BGR2GRAY cv::COLOR_BGR2GRAY
#define GRAY2RGB cv::COLOR_GRAY2RGB
#define PNG_COMPRESSION cv::IMWRITE_PNG_COMPRESSION
#define JPEG_QUALITY cv::IMWRITE_JPEG_QUALITY
#define RANSAC cv::RANSAC
#define CV_EPNP cv::SOLVEPNP_EPNP
#define AA cv::LINE_AA
#define COVAR_NORMAL cv::COVAR_NORMAL
#define COVAR_COLS cv::COVAR_COLS
#define HAAR_FIND_BIGGEST_OBJECT 4 // not 100% certain about this..
#define HAAR_SCALE_IMAGE 2// not 100% certain about this..
#define WINDOW_AUTOSIZE cv::WINDOW_AUTOSIZE
#define PCA_DATA_AS_COL cv::PCA_DATA_AS_COL
#define EVENT_LBUTTONDOWN cv::EVENT_LBUTTONDOWN
#define EVENT_RBUTTONDOWN cv::EVENT_RBUTTONDOWN
#define CV_RGB cv::Scalar
#define CV_TERMCRIT_EPS cv::TermCriteria::EPS
#define CV_TERMCRIT_ITER cv::TermCriteria::COUNT
#else
#define RGB2GRAY CV_RGB2GRAY
#define BGR2GRAY CV_BGR2GRAY
#define GRAY2RGB CV_GRAY2RGB
#define PNG_COMPRESSION CV_IMWRITE_PNG_COMPRESSION
#define JPEG_QUALITY CV_IMWRITE_JPEG_QUALITY
#define FOURCC CV_FOURCC
#define RANSAC CV_RANSAC
#define AA CV_AA
#define COVAR_NORMAL CV_COVAR_NORMAL
#define COVAR_COLS CV_COVAR_COLS
#define HAAR_FIND_BIGGEST_OBJECT CV_HAAR_FIND_BIGGEST_OBJECT
#define HAAR_SCALE_IMAGE CV_HAAR_SCALE_IMAGE
#define WINDOW_AUTOSIZE CV_WINDOW_AUTOSIZE
#define PCA_DATA_AS_COL CV_PCA_DATA_AS_COL
#define EVENT_LBUTTONDOWN CV_EVENT_LBUTTONDOWN
#define EVENT_RBUTTONDOWN CV_EVENT_RBUTTONDOWN
#endif

#endif // THERMALVIS_OPENCV_REDEFINITIONS_H
