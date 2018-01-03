//#include <interfaces\interpolators.h>

/* NiBSplineTransformInterpolator

vector< Quaternion > NiBSplineTransformInterpolator::GetQuatRotateControlData() const
{
vector< Quaternion > value;
if ((rotationOffset != USHRT_MAX) && splineData && basisData) { // has rotation data
int nctrl = basisData->GetNumControlPoints();
int npts = nctrl * SizeofQuat;
vector<float> points = splineData->GetFloatControlPointRange(rotationOffset, npts);
value.reserve(nctrl);
for (int i=0; i<npts; ) {
Quaternion key;
key.w = float(points[i++]);
key.x = float(points[i++]);
key.y = float(points[i++]);
key.z = float(points[i++]);
value.push_back(key);
}
}
return value;
}

vector< Vector3 > NiBSplineTransformInterpolator::GetTranslateControlData() const
{
vector< Vector3 > value;
if ((translationOffset != USHRT_MAX) && splineData && basisData) { // has translation data
int nctrl = basisData->GetNumControlPoints();
int npts = nctrl * SizeofTrans;
vector<float> points = splineData->GetFloatControlPointRange(translationOffset, npts);
value.reserve(nctrl);
for (int i=0; i<npts; ) {
Vector3 key;
key.x = float(points[i++]);
key.y = float(points[i++]);
key.z = float(points[i++]);
value.push_back(key);
}
}
return value;
}

vector< float > NiBSplineTransformInterpolator::GetScaleControlData() const
{
vector< float > value;
if ((scaleOffset != USHRT_MAX) && splineData && basisData) { // has translation data
int nctrl = basisData->GetNumControlPoints();
int npts = nctrl * SizeofScale;
vector<float> points = splineData->GetFloatControlPointRange(scaleOffset, npts);
value.reserve(nctrl);
for (int i=0; i<npts; ) {
float data = float(points[i++]);
value.push_back(data);
}
}
return value;
}

vector< Key<Quaternion> > NiBSplineTransformInterpolator::SampleQuatRotateKeys(int npoints, int degree) const
{
vector< Key<Quaternion> > value;
if ((rotationOffset != USHRT_MAX) && splineData && basisData) { // has rotation data
int nctrl = basisData->GetNumControlPoints();
int npts = nctrl * SizeofQuat;
vector<float> points = splineData->GetFloatControlPointRange(rotationOffset, npts);
vector<float> control(npts);
vector<float> output(npoints*SizeofQuat);
for (int i=0, j=0; i<nctrl; ++i) {
for (int k=0; k<SizeofQuat; ++k)
control[i*SizeofQuat + k] = float(points[j++]);
}
if (degree>=nctrl)
degree = nctrl - 1;
// fit data
bspline(nctrl-1, degree+1, SizeofQuat, &control[0], &output[0], npoints);

// copy to key
float time = GetStartTime();
float incr = (GetStopTime() - GetStartTime()) / float(npoints) ;
value.reserve(npoints);
for (int i=0, j=0; i<npoints; i++) {
Key<Quaternion> key;
key.time = time;
key.backward_tangent.Set(1.0f,0.0f,0.0f,0.0f);
key.forward_tangent.Set(1.0f,0.0f,0.0f,0.0f);
key.data.w = output[j++];
key.data.x = output[j++];
key.data.y = output[j++];
key.data.z = output[j++];
value.push_back(key);
time += incr;
}
}
return value;
}

vector< Key<Vector3> > NiBSplineTransformInterpolator::SampleTranslateKeys(int npoints, int degree) const
{
vector< Key<Vector3> > value;
if ((translationOffset != USHRT_MAX) && splineData && basisData) { // has rotation data
int nctrl = basisData->GetNumControlPoints();
int npts = nctrl * SizeofTrans;
vector<float> points = splineData->GetFloatControlPointRange(translationOffset, npts);
vector<float> control(npts);
vector<float> output(npoints*SizeofTrans);
for (int i=0, j=0; i<nctrl; ++i) {
for (int k=0; k<SizeofTrans; ++k)
control[i*SizeofTrans + k] = float(points[j++]);
}
// fit data
bspline(nctrl-1, degree+1, SizeofTrans, &control[0], &output[0], npoints);

// copy to key
float time = GetStartTime();
float incr = (GetStopTime() - GetStartTime()) / float(npoints) ;
value.reserve(npoints);
for (int i=0, j=0; i<npoints; i++) {
Key<Vector3> key;
key.time = time;
key.backward_tangent.Set(0.0f,0.0f,0.0f);
key.forward_tangent.Set(0.0f,0.0f,0.0f);
key.data.x = output[j++];
key.data.y = output[j++];
key.data.z = output[j++];
value.push_back(key);
time += incr;
}
}
return value;
}

vector< Key<float> > NiBSplineTransformInterpolator::SampleScaleKeys(int npoints, int degree) const
{
vector< Key<float> > value;
if ((scaleOffset != USHRT_MAX) && splineData && basisData) // has rotation data
{
int nctrl = basisData->GetNumControlPoints();
int npts = nctrl * SizeofScale;
vector<float> points = splineData->GetFloatControlPointRange(scaleOffset, npts);
vector<float> control(npts);
vector<float> output(npoints*SizeofScale);
for (int i=0, j=0; i<nctrl; ++i) {
control[i] = float(points[j++]) / float (32767);
}
// fit data
bspline(nctrl-1, degree+1, SizeofScale, &control[0], &output[0], npoints);

// copy to key
float time = GetStartTime();
float incr = (GetStopTime() - GetStartTime()) / float(npoints) ;
value.reserve(npoints);
for (int i=0, j=0; i<npoints; i++) {
Key<float> key;
key.time = time;
key.backward_tangent = 0.0f;
key.forward_tangent = 0.0f;
key.data = output[j++];
value.push_back(key);
time += incr;
}
}
return value;
}

int NiBSplineTransformInterpolator::GetNumControlPoints() const
{
if (basisData)
{
return basisData->GetNumControlPoints();
}
return 0;
}

*/

