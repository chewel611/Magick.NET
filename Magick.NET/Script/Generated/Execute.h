//=================================================================================================
// Copyright 2013 Dirk Lemstra <http://magick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
void InitializeExecute();
delegate void ExecuteElementImage(XmlElement^ element, MagickImage^ image);
static initonly System::Collections::Hashtable^ _StaticExecuteImage = InitializeStaticExecuteImage();
static System::Collections::Hashtable^ InitializeStaticExecuteImage();
System::Collections::Hashtable^ _ExecuteImage;
void InitializeExecuteImage();
void ExecuteImage(XmlElement^ element, MagickImage^ image);
static void ExecuteAdjoin(XmlElement^ element, MagickImage^ image);
static void ExecuteAnimationDelay(XmlElement^ element, MagickImage^ image);
static void ExecuteAnimationIterations(XmlElement^ element, MagickImage^ image);
static void ExecuteAntiAlias(XmlElement^ element, MagickImage^ image);
static void ExecuteBackgroundColor(XmlElement^ element, MagickImage^ image);
static void ExecuteBorderColor(XmlElement^ element, MagickImage^ image);
static void ExecuteBoxColor(XmlElement^ element, MagickImage^ image);
static void ExecuteClassType(XmlElement^ element, MagickImage^ image);
void ExecuteClipMask(XmlElement^ element, MagickImage^ image);
static void ExecuteColorFuzz(XmlElement^ element, MagickImage^ image);
static void ExecuteColorMapSize(XmlElement^ element, MagickImage^ image);
static void ExecuteColorSpace(XmlElement^ element, MagickImage^ image);
static void ExecuteColorType(XmlElement^ element, MagickImage^ image);
static void ExecuteComment(XmlElement^ element, MagickImage^ image);
static void ExecuteCompose(XmlElement^ element, MagickImage^ image);
static void ExecuteCompressionMethod(XmlElement^ element, MagickImage^ image);
static void ExecuteDensity(XmlElement^ element, MagickImage^ image);
static void ExecuteEndian(XmlElement^ element, MagickImage^ image);
static void ExecuteFillColor(XmlElement^ element, MagickImage^ image);
void ExecuteFillPattern(XmlElement^ element, MagickImage^ image);
static void ExecuteFillRule(XmlElement^ element, MagickImage^ image);
static void ExecuteFilterType(XmlElement^ element, MagickImage^ image);
static void ExecuteFlashPixView(XmlElement^ element, MagickImage^ image);
static void ExecuteFont(XmlElement^ element, MagickImage^ image);
static void ExecuteFontPointsize(XmlElement^ element, MagickImage^ image);
static void ExecuteFormat(XmlElement^ element, MagickImage^ image);
static void ExecuteGifDisposeMethod(XmlElement^ element, MagickImage^ image);
static void ExecuteHasMatte(XmlElement^ element, MagickImage^ image);
static void ExecuteIsMonochrome(XmlElement^ element, MagickImage^ image);
static void ExecuteLabel(XmlElement^ element, MagickImage^ image);
static void ExecuteMatteColor(XmlElement^ element, MagickImage^ image);
static void ExecuteModulusDepth(XmlElement^ element, MagickImage^ image);
static void ExecuteOrientation(XmlElement^ element, MagickImage^ image);
static void ExecutePage(XmlElement^ element, MagickImage^ image);
static void ExecuteQuality(XmlElement^ element, MagickImage^ image);
static void ExecuteQuantizeColors(XmlElement^ element, MagickImage^ image);
static void ExecuteQuantizeColorSpace(XmlElement^ element, MagickImage^ image);
static void ExecuteQuantizeDither(XmlElement^ element, MagickImage^ image);
static void ExecuteQuantizeTreeDepth(XmlElement^ element, MagickImage^ image);
static void ExecuteRenderingIntent(XmlElement^ element, MagickImage^ image);
static void ExecuteResolutionUnits(XmlElement^ element, MagickImage^ image);
static void ExecuteStrokeAntiAlias(XmlElement^ element, MagickImage^ image);
static void ExecuteStrokeColor(XmlElement^ element, MagickImage^ image);
static void ExecuteStrokeDashOffset(XmlElement^ element, MagickImage^ image);
static void ExecuteStrokeLineCap(XmlElement^ element, MagickImage^ image);
static void ExecuteStrokeLineJoin(XmlElement^ element, MagickImage^ image);
static void ExecuteStrokeMiterLimit(XmlElement^ element, MagickImage^ image);
void ExecuteStrokePattern(XmlElement^ element, MagickImage^ image);
static void ExecuteStrokeWidth(XmlElement^ element, MagickImage^ image);
static void ExecuteTextEncoding(XmlElement^ element, MagickImage^ image);
static void ExecuteTileName(XmlElement^ element, MagickImage^ image);
static void ExecuteVerbose(XmlElement^ element, MagickImage^ image);
static void ExecuteVirtualPixelMethod(XmlElement^ element, MagickImage^ image);
static void ExecuteAdaptiveBlur(XmlElement^ element, MagickImage^ image);
static void ExecuteAdaptiveThreshold(XmlElement^ element, MagickImage^ image);
static void ExecuteAddNoise(XmlElement^ element, MagickImage^ image);
static void ExecuteAddProfile(XmlElement^ element, MagickImage^ image);
static void ExecuteAnnotate(XmlElement^ element, MagickImage^ image);
static void ExecuteAttribute(XmlElement^ element, MagickImage^ image);
static void ExecuteBlur(XmlElement^ element, MagickImage^ image);
static void ExecuteBorder(XmlElement^ element, MagickImage^ image);
static void ExecuteCDL(XmlElement^ element, MagickImage^ image);
static void ExecuteCharcoal(XmlElement^ element, MagickImage^ image);
static void ExecuteChop(XmlElement^ element, MagickImage^ image);
static void ExecuteChopHorizontal(XmlElement^ element, MagickImage^ image);
static void ExecuteChopVertical(XmlElement^ element, MagickImage^ image);
static void ExecuteChromaBluePrimary(XmlElement^ element, MagickImage^ image);
static void ExecuteChromaGreenPrimary(XmlElement^ element, MagickImage^ image);
static void ExecuteChromaRedPrimary(XmlElement^ element, MagickImage^ image);
static void ExecuteChromaWhitePoint(XmlElement^ element, MagickImage^ image);
static void ExecuteColorAlpha(XmlElement^ element, MagickImage^ image);
static void ExecuteColorize(XmlElement^ element, MagickImage^ image);
static void ExecuteColorMap(XmlElement^ element, MagickImage^ image);
void ExecuteComposite(XmlElement^ element, MagickImage^ image);
static void ExecuteContrast(XmlElement^ element, MagickImage^ image);
static void ExecuteCrop(XmlElement^ element, MagickImage^ image);
static void ExecuteCycleColormap(XmlElement^ element, MagickImage^ image);
static void ExecuteDepth(XmlElement^ element, MagickImage^ image);
static void ExecuteDespeckle(XmlElement^ element, MagickImage^ image);
static void ExecuteEdge(XmlElement^ element, MagickImage^ image);
static void ExecuteEmboss(XmlElement^ element, MagickImage^ image);
static void ExecuteExifProfile(XmlElement^ element, MagickImage^ image);
static void ExecuteExtent(XmlElement^ element, MagickImage^ image);
static void ExecuteFlip(XmlElement^ element, MagickImage^ image);
void ExecuteFloodFill(XmlElement^ element, MagickImage^ image);
static void ExecuteFlop(XmlElement^ element, MagickImage^ image);
static void ExecuteFrame(XmlElement^ element, MagickImage^ image);
static void ExecuteFx(XmlElement^ element, MagickImage^ image);
static void ExecuteGamma(XmlElement^ element, MagickImage^ image);
static void ExecuteGaussianBlur(XmlElement^ element, MagickImage^ image);
void ExecuteHaldClut(XmlElement^ element, MagickImage^ image);
static void ExecuteImplode(XmlElement^ element, MagickImage^ image);
void ExecuteInverseFourierTransform(XmlElement^ element, MagickImage^ image);
static void ExecuteLevel(XmlElement^ element, MagickImage^ image);
static void ExecuteLower(XmlElement^ element, MagickImage^ image);
static void ExecuteMagnify(XmlElement^ element, MagickImage^ image);
void ExecuteMap(XmlElement^ element, MagickImage^ image);
static void ExecuteMedianFilter(XmlElement^ element, MagickImage^ image);
static void ExecuteMinify(XmlElement^ element, MagickImage^ image);
static void ExecuteModulate(XmlElement^ element, MagickImage^ image);
static void ExecuteMotionBlur(XmlElement^ element, MagickImage^ image);
static void ExecuteNegate(XmlElement^ element, MagickImage^ image);
static void ExecuteNormalize(XmlElement^ element, MagickImage^ image);
static void ExecuteOilPaint(XmlElement^ element, MagickImage^ image);
static void ExecuteQuantize(XmlElement^ element, MagickImage^ image);
static void ExecuteQuantumOperator(XmlElement^ element, MagickImage^ image);
static void ExecuteRaise(XmlElement^ element, MagickImage^ image);
static void ExecuteRandomThreshold(XmlElement^ element, MagickImage^ image);
static void ExecuteReduceNoise(XmlElement^ element, MagickImage^ image);
static void ExecuteRemoveProfile(XmlElement^ element, MagickImage^ image);
static void ExecuteResize(XmlElement^ element, MagickImage^ image);
static void ExecuteRoll(XmlElement^ element, MagickImage^ image);
static void ExecuteRotate(XmlElement^ element, MagickImage^ image);
static void ExecuteSample(XmlElement^ element, MagickImage^ image);
static void ExecuteScale(XmlElement^ element, MagickImage^ image);
static void ExecuteSegment(XmlElement^ element, MagickImage^ image);
static void ExecuteSeparate(XmlElement^ element, MagickImage^ image);
static void ExecuteShade(XmlElement^ element, MagickImage^ image);
static void ExecuteShadow(XmlElement^ element, MagickImage^ image);
static void ExecuteSharpen(XmlElement^ element, MagickImage^ image);
static void ExecuteShave(XmlElement^ element, MagickImage^ image);
static void ExecuteShear(XmlElement^ element, MagickImage^ image);
static void ExecuteSigmoidalContrast(XmlElement^ element, MagickImage^ image);
static void ExecuteSolarize(XmlElement^ element, MagickImage^ image);
void ExecuteStegano(XmlElement^ element, MagickImage^ image);
void ExecuteStereo(XmlElement^ element, MagickImage^ image);
static void ExecuteStrip(XmlElement^ element, MagickImage^ image);
static void ExecuteSwirl(XmlElement^ element, MagickImage^ image);
void ExecuteTexture(XmlElement^ element, MagickImage^ image);
static void ExecuteThreshold(XmlElement^ element, MagickImage^ image);
static void ExecuteTransform(XmlElement^ element, MagickImage^ image);
static void ExecuteTransformOrigin(XmlElement^ element, MagickImage^ image);
static void ExecuteTransformReset(XmlElement^ element, MagickImage^ image);
static void ExecuteTransformRotation(XmlElement^ element, MagickImage^ image);
static void ExecuteTransformScale(XmlElement^ element, MagickImage^ image);
static void ExecuteTransformSkewX(XmlElement^ element, MagickImage^ image);
static void ExecuteTransformSkewY(XmlElement^ element, MagickImage^ image);
static void ExecuteTransparent(XmlElement^ element, MagickImage^ image);
static void ExecuteTransparentChroma(XmlElement^ element, MagickImage^ image);
static void ExecuteTrim(XmlElement^ element, MagickImage^ image);
static void ExecuteUnsharpmask(XmlElement^ element, MagickImage^ image);
static void ExecuteWave(XmlElement^ element, MagickImage^ image);
static void ExecuteZoom(XmlElement^ element, MagickImage^ image);
delegate void ExecuteElementDrawable(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static initonly System::Collections::Hashtable^ _StaticExecuteDrawable = InitializeStaticExecuteDrawable();
static System::Collections::Hashtable^ InitializeStaticExecuteDrawable();
System::Collections::Hashtable^ _ExecuteDrawable;
void InitializeExecuteDrawable();
void ExecuteDrawable(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteAffine(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteArc(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteBezier(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteCircle(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteClipPath(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteColor(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
void ExecuteCompositeImage(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteDashOffset(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteEllipse(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteFillColor(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteFillOpacity(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteFillRule(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteFont(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteGravity(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteLine(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteMatte(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteMiterLimit(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecutePath(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecutePoint(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecutePointSize(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecutePolygon(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecutePolyline(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecutePushClipPath(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecutePushPattern(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteRectangle(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteRotation(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteRoundRectangle(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteScaling(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteSkewX(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteSkewY(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteStrokeAntialias(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteStrokeColor(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteStrokeLineCap(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteStrokeLineJoin(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteStrokeOpacity(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteStrokeWidth(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteText(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteTextAntialias(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteTextDecoration(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteTextUnderColor(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteTranslation(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
static void ExecuteViewbox(XmlElement^ element, System::Collections::ObjectModel::Collection<Drawable^>^ drawables);
delegate void ExecuteElementPath(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static initonly System::Collections::Hashtable^ _StaticExecutePath = InitializeStaticExecutePath();
static System::Collections::Hashtable^ InitializeStaticExecutePath();
static void ExecutePath(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteArcAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteArcRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteCurvetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteCurvetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteLinetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteLinetoHorizontalAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteLinetoHorizontalRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteLinetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteLinetoVerticalAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteLinetoVerticalRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteMovetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteMovetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteQuadraticCurvetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteQuadraticCurvetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteSmoothCurvetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteSmoothCurvetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteSmoothQuadraticCurvetoAbs(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static void ExecuteSmoothQuadraticCurvetoRel(XmlElement^ element, System::Collections::ObjectModel::Collection<PathBase^>^ paths);
static MagickGeometry^ CreateMagickGeometry(XmlElement^ element);
static Coordinate CreateCoordinate(XmlElement^ element);
static Collection<Coordinate>^ CreateCoordinates(XmlElement^ element);
static PathArc^ CreatePathArc(XmlElement^ element);
static Collection<PathArc^>^ CreatePathArcs(XmlElement^ element);
static PathCurveto^ CreatePathCurveto(XmlElement^ element);
static Collection<PathCurveto^>^ CreatePathCurvetos(XmlElement^ element);
static PathQuadraticCurveto^ CreatePathQuadraticCurveto(XmlElement^ element);
static Collection<PathQuadraticCurveto^>^ CreatePathQuadraticCurvetos(XmlElement^ element);
