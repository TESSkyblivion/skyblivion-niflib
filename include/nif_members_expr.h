#ifndef _NIFLIB_EXPR_H_
#define _NIFLIB_EXPR_H_

#include <dll_export.h>

namespace Niflib {
	struct NifInfo;
	class bhkBallSocketConstraintChain;
	class bhkMoppBvTreeShape;
	class NiPixelData;

	NIFLIB_HIDDEN unsigned int bhkBallSocketConstraintChain_numPivotsCalc(const bhkBallSocketConstraintChain&, const NifInfo & info);
	NIFLIB_HIDDEN unsigned int bhkMoppBvTreeShape_moppDataSizeCalc(const bhkMoppBvTreeShape&, const NifInfo & info);
	NIFLIB_HIDDEN unsigned int NiPixelData_numPixelsCalc(const NiPixelData&, const NifInfo & info);
}
#endif // !_NIFLIB_EXPR_H_
