/*
 ===============================================================================
 Name        : ImageFeaturesBridge.hpp
 Author      : NeatDecisions
 Version     :
 Copyright   : Copyright © 2018–2019 Neat Decisions. All rights reserved.
 Description : Detwinner
 ===============================================================================
 */

#ifndef LOGIC_IMAGES_IMAGEFEATURESBRIDGE_HPP_
#define LOGIC_IMAGES_IMAGEFEATURESBRIDGE_HPP_

#include <Magick++.h>
#include <logic/images/ImageFeatures.hpp>


namespace detwinner {
namespace logic {
namespace images {


//==============================================================================
// ImageFeaturesBridge
//==============================================================================
class ImageFeaturesBridge
{
public:
	static ImageFeatures GetImageFeatures(Magick::Image & image, unsigned int id);

	ImageFeaturesBridge() = delete;
	~ImageFeaturesBridge() = delete;

private:
	static void GetIntensityHistogram(
			const Magick::Image & image,
			const Magick::Geometry & roi,
			HistogramI & histI);

	static void GetYUVHistograms(
			const Magick::Image & image,
			const Magick::Geometry & roi,
			Histogram & histY,
			Histogram & histU,
			Histogram & histV);
};


}}}

#endif /* IMAGEFEATURESBRIDGE_HPP_ */
