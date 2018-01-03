#include <nif_members_expr.h>

//Hierarchy
#include <obj/NiPalette.h>

#include <obj/bhkBallSocketConstraintChain.h>
#include <obj/bhkMoppBvTreeShape.h>
#include <obj/NiPixelData.h>

namespace Niflib {

	unsigned int bhkBallSocketConstraintChain_numPivotsCalc(const bhkBallSocketConstraintChain& in, const NifInfo & info) {
		return in.GetPivots().size() * 2;
	}

	unsigned int bhkMoppBvTreeShape_moppDataSizeCalc(const bhkMoppBvTreeShape& in, const NifInfo & info) {
		//[Old MOPP Data] moppDataSize = (moppDataSize - 1)
		//[MOPP Data] moppDataSize = moppDataSize
		if (info.version <= 0x0A000100) {
			return in.GetOldMoppData().size() + 1;
		};
		if (info.version >= 0x0A000102) {
			return in.GetMoppData().size();
		};
		return 0;
	}

	unsigned int NiPixelData_numPixelsCalc(const NiPixelData& in, const NifInfo & info) {
		if (info.version >= 0x0A030006) {
			return in.GetPixelData().size() / (in.GetNumFaces() != 0 ? in.GetNumFaces() : 1);
		}
		return in.GetPixelData().size();
	}
}