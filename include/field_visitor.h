#ifndef __FIELD_VISITOR_H_
#define __FIELD_VISITOR_H_
/* Copyright (c) 2018, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

namespace Niflib {
	struct NifInfo;
	struct ByteMatrix;
	struct ByteColor3;
	struct LODRange;
	struct MatchGroup;
	struct ByteVector3;
	struct HalfVector3;
	struct hkQuaternion;
	struct MipMap;
	struct NodeSet;
	struct SkinInfo;
	struct SkinInfoSet;
	struct BoneVertData;
	struct AVObject;
	struct ControlledBlock;
	struct ExportInfo;
	struct StringPalette;
	struct TBC;
	template <typename T> struct KeyGroup;
	struct HalfTexCoord;
	struct TexDesc;
	struct ShaderTexDesc;
	struct SkinPartition;
	struct NiPlane;
	struct NiBound;
	struct NiQuatTransform;
	struct NiTransform;
	struct FurniturePosition;
	struct TriangleData;
	struct Morph;
	struct Particle;
	struct BoneData;
	struct HavokFilter;
	struct HavokMaterial;
	struct OblivionSubShape;
	struct bhkPositionConstraintMotor;
	struct bhkVelocityConstraintMotor;
	struct bhkSpringDamperConstraintMotor;
	struct MotorDescriptor;
	struct ReferenceSystemDescriptor;
	struct JointLinkPoint;
	struct JointAxisPoint;
	struct RagdollDescriptor;
	struct LimitedHingeDescriptor;
	struct HingeDescriptor;
	struct BallAndSocketDescriptor;
	struct PrismaticDescriptor;
	struct StiffSpringDescriptor;
	struct OldSkinData;
	struct BoxBV;
	struct CapsuleBV;
	struct HalfSpaceBV;
	struct BoundingVolume;
	struct UnionBV;
	struct MorphWeight;
	struct BoneTransform;
	struct BonePose;
	struct DecalVectorArray;
	struct BodyPartList;
	struct BoneLOD;
	struct bhkCMSDMaterial;
	struct bhkCMSDBigTris;
	struct bhkCMSDTransform;
	struct bhkCMSDChunk;
	struct MalleableDescriptor;
	struct ConstraintData;
	struct hkWorldObjCinfoProperty;
	struct ConstraintInfo;
	struct InterpBlendItem;
	struct MaterialData;
	struct ParticleDesc;
	struct PixelFormatComponent;
	struct FormatPrefs;
	struct PhysXMaterialRef;
	struct PhysXStateName;
	struct PhysXBodyStoredVels;
	struct NiPhysXJointActor;
	struct NxJointLimitSoftDesc;
	struct NxJointDriveDesc;
	struct NiPhysXJointLimit;
	struct NxPlane;
	struct NxCapsule;
	struct NxSpringDesc;
	struct NxMaterialDesc;
	struct Polygon;
	struct BSTreadTransform;
	struct BSGeometrySubSegment;
	struct BSGeometrySegmentData;
	struct AdditionalDataInfo;
	struct AdditionalDataBlock;
	struct BSPackedAdditionalDataBlock;
	struct Region;
	struct SemanticData;
	struct DataStreamRef;
	struct ExtraMeshDataEpicMickey;
	struct ExtraMeshDataEpicMickey2;
	struct ElementReference;
	struct LODInfo;
	struct PSSpawnRateKey;
	struct BSGeometryPerSegmentSharedData;
	struct BSGeometrySegmentSharedData;
	struct BSSkinBoneTrans;
	struct BSConnectPoint;
	struct BSPackedGeomDataCombined;
	struct BSPackedGeomData;
	struct BSPackedSharedGeomData;
	struct BSPackedGeomObject;
	class NiObject;
	class Ni3dsAlphaAnimator;
	class Ni3dsAnimationNode;
	class Ni3dsColorAnimator;
	class Ni3dsMorphShape;
	class Ni3dsParticleSystem;
	class Ni3dsPathController;
	class NiParticleModifier;
	class NiPSysCollider;
	class bhkRefObject;
	class bhkSerializable;
	class bhkWorldObject;
	class bhkPhantom;
	class bhkShapePhantom;
	class bhkSimpleShapePhantom;
	class bhkEntity;
	class bhkRigidBody;
	class bhkRigidBodyT;
	class bhkConstraint;
	class bhkLimitedHingeConstraint;
	class bhkMalleableConstraint;
	class bhkStiffSpringConstraint;
	class bhkRagdollConstraint;
	class bhkPrismaticConstraint;
	class bhkHingeConstraint;
	class bhkBallAndSocketConstraint;
	class bhkBallSocketConstraintChain;
	class bhkShape;
	class bhkTransformShape;
	class bhkSphereRepShape;
	class bhkConvexShape;
	class bhkSphereShape;
	class bhkCapsuleShape;
	class bhkBoxShape;
	class bhkConvexVerticesShape;
	class bhkConvexTransformShape;
	class bhkConvexSweepShape;
	class bhkMultiSphereShape;
	class bhkBvTreeShape;
	class bhkMoppBvTreeShape;
	class bhkShapeCollection;
	class bhkListShape;
	class bhkMeshShape;
	class bhkPackedNiTriStripsShape;
	class bhkNiTriStripsShape;
	class NiExtraData;
	class NiInterpolator;
	class NiKeyBasedInterpolator;
	class NiFloatInterpolator;
	class NiTransformInterpolator;
	class NiPoint3Interpolator;
	class NiPathInterpolator;
	class NiBoolInterpolator;
	class NiBoolTimelineInterpolator;
	class NiBlendInterpolator;
	class NiBSplineInterpolator;
	class NiObjectNET;
	class NiCollisionObject;
	class NiCollisionData;
	class bhkNiCollisionObject;
	class bhkCollisionObject;
	class bhkBlendCollisionObject;
	class bhkPCollisionObject;
	class bhkSPCollisionObject;
	class NiAVObject;
	class NiDynamicEffect;
	class NiLight;
	class NiProperty;
	class NiTransparentProperty;
	class NiPSysModifier;
	class NiPSysEmitter;
	class NiPSysVolumeEmitter;
	class NiTimeController;
	class NiInterpController;
	class NiMultiTargetTransformController;
	class NiGeomMorpherController;
	class NiMorphController;
	class NiMorpherController;
	class NiSingleInterpController;
	class NiKeyframeController;
	class NiTransformController;
	class NiPSysModifierCtlr;
	class NiPSysEmitterCtlr;
	class NiPSysModifierBoolCtlr;
	class NiPSysModifierActiveCtlr;
	class NiPSysModifierFloatCtlr;
	class NiPSysEmitterDeclinationCtlr;
	class NiPSysEmitterDeclinationVarCtlr;
	class NiPSysEmitterInitialRadiusCtlr;
	class NiPSysEmitterLifeSpanCtlr;
	class NiPSysEmitterSpeedCtlr;
	class NiPSysGravityStrengthCtlr;
	class NiFloatInterpController;
	class NiFlipController;
	class NiAlphaController;
	class NiTextureTransformController;
	class NiLightDimmerController;
	class NiBoolInterpController;
	class NiVisController;
	class NiPoint3InterpController;
	class NiMaterialColorController;
	class NiLightColorController;
	class NiExtraDataController;
	class NiFloatExtraDataController;
	class NiFloatsExtraDataController;
	class NiFloatsExtraDataPoint3Controller;
	class NiBoneLODController;
	class NiBSBoneLODController;
	class NiGeometry;
	class NiTriBasedGeom;
	class NiGeometryData;
	class AbstractAdditionalGeometryData;
	class NiTriBasedGeomData;
	class bhkBlendController;
	class BSBound;
	class BSFurnitureMarker;
	class BSParentVelocityModifier;
	class BSPSysArrayEmitter;
	class BSWindModifier;
	class hkPackedNiTriStripsData;
	class NiAlphaProperty;
	class NiAmbientLight;
	class NiParticlesData;
	class NiRotatingParticlesData;
	class NiAutoNormalParticlesData;
	class NiPSysData;
	class NiMeshPSysData;
	class NiBinaryExtraData;
	class NiBinaryVoxelExtraData;
	class NiBinaryVoxelData;
	class NiBlendBoolInterpolator;
	class NiBlendFloatInterpolator;
	class NiBlendPoint3Interpolator;
	class NiBlendTransformInterpolator;
	class NiBoolData;
	class NiBooleanExtraData;
	class NiBSplineBasisData;
	class NiBSplineFloatInterpolator;
	class NiBSplineCompFloatInterpolator;
	class NiBSplinePoint3Interpolator;
	class NiBSplineCompPoint3Interpolator;
	class NiBSplineTransformInterpolator;
	class NiBSplineCompTransformInterpolator;
	class BSRotAccumTransfInterpolator;
	class NiBSplineData;
	class NiCamera;
	class NiColorData;
	class NiColorExtraData;
	class NiControllerManager;
	class NiSequence;
	class NiControllerSequence;
	class NiAVObjectPalette;
	class NiDefaultAVObjectPalette;
	class NiDirectionalLight;
	class NiDitherProperty;
	class NiRollController;
	class NiFloatData;
	class NiFloatExtraData;
	class NiFloatsExtraData;
	class NiFogProperty;
	class NiGravity;
	class NiIntegerExtraData;
	class BSXFlags;
	class NiIntegersExtraData;
	class BSKeyframeController;
	class NiKeyframeData;
	class NiLookAtController;
	class NiLookAtInterpolator;
	class NiMaterialProperty;
	class NiMorphData;
	class NiNode;
	class NiBone;
	class AvoidNode;
	class FxWidget;
	class FxButton;
	class FxRadioButton;
	class NiBillboardNode;
	class NiBSAnimationNode;
	class NiBSParticleNode;
	class NiSwitchNode;
	class NiLODNode;
	class NiPalette;
	class NiParticleBomb;
	class NiParticleColorModifier;
	class NiParticleGrowFade;
	class NiParticleMeshModifier;
	class NiParticleRotation;
	class NiParticles;
	class NiAutoNormalParticles;
	class NiParticleMeshes;
	class NiParticleMeshesData;
	class NiParticleSystem;
	class NiMeshParticleSystem;
	class NiParticleSystemController;
	class NiBSPArrayController;
	class NiPathController;
	class NiPixelFormat;
	class NiPersistentSrcTextureRendererData;
	class NiPixelData;
	class NiPlanarCollider;
	class NiPointLight;
	class NiPosData;
	class NiRotData;
	class NiPSysAgeDeathModifier;
	class NiPSysBombModifier;
	class NiPSysBoundUpdateModifier;
	class NiPSysBoxEmitter;
	class NiPSysColliderManager;
	class NiPSysColorModifier;
	class NiPSysCylinderEmitter;
	class NiPSysDragModifier;
	class NiPSysEmitterCtlrData;
	class NiPSysGravityModifier;
	class NiPSysGrowFadeModifier;
	class NiPSysMeshEmitter;
	class NiPSysMeshUpdateModifier;
	class BSPSysInheritVelocityModifier;
	class BSPSysHavokUpdateModifier;
	class BSPSysRecycleBoundModifier;
	class BSPSysSubTexModifier;
	class NiPSysPlanarCollider;
	class NiPSysSphericalCollider;
	class NiPSysPositionModifier;
	class NiPSysResetOnLoopCtlr;
	class NiPSysRotationModifier;
	class NiPSysSpawnModifier;
	class NiPSysSphereEmitter;
	class NiPSysUpdateCtlr;
	class NiPSysFieldModifier;
	class NiPSysVortexFieldModifier;
	class NiPSysGravityFieldModifier;
	class NiPSysDragFieldModifier;
	class NiPSysTurbulenceFieldModifier;
	class BSPSysLODModifier;
	class BSPSysScaleModifier;
	class NiPSysFieldMagnitudeCtlr;
	class NiPSysFieldAttenuationCtlr;
	class NiPSysFieldMaxDistanceCtlr;
	class NiPSysAirFieldAirFrictionCtlr;
	class NiPSysAirFieldInheritVelocityCtlr;
	class NiPSysAirFieldSpreadCtlr;
	class NiPSysInitialRotSpeedCtlr;
	class NiPSysInitialRotSpeedVarCtlr;
	class NiPSysInitialRotAngleCtlr;
	class NiPSysInitialRotAngleVarCtlr;
	class NiPSysEmitterPlanarAngleCtlr;
	class NiPSysEmitterPlanarAngleVarCtlr;
	class NiPSysAirFieldModifier;
	class NiPSysTrailEmitter;
	class NiLightIntensityController;
	class NiPSysRadialFieldModifier;
	class NiLODData;
	class NiRangeLODData;
	class NiScreenLODData;
	class NiRotatingParticles;
	class NiSequenceStreamHelper;
	class NiShadeProperty;
	class NiSkinData;
	class NiSkinInstance;
	class NiTriShapeSkinController;
	class NiClodSkinInstance;
	class NiSkinPartition;
	class NiTexture;
	class NiSourceTexture;
	class NiSpecularProperty;
	class NiSphericalCollider;
	class NiSpotLight;
	class NiStencilProperty;
	class NiStringExtraData;
	class NiStringPalette;
	class NiStringsExtraData;
	class NiTextKeyExtraData;
	class NiTextureEffect;
	class NiTextureModeProperty;
	class NiImage;
	class NiTextureProperty;
	class NiTexturingProperty;
	class NiMultiTextureProperty;
	class NiTransformData;
	class NiTriShape;
	class NiTriShapeData;
	class NiTriStrips;
	class NiTriStripsData;
	class NiEnvMappedTriShape;
	class NiEnvMappedTriShapeData;
	class NiBezierTriangle4;
	class NiBezierMesh;
	class NiClod;
	class NiClodData;
	class NiUVController;
	class NiUVData;
	class NiVectorExtraData;
	class NiVertexColorProperty;
	class NiVertWeightsExtraData;
	class NiVisData;
	class NiWireframeProperty;
	class NiZBufferProperty;
	class RootCollisionNode;
	class NiRawImageData;
	class NiAccumulator;
	class NiSortAdjustNode;
	class NiSourceCubeMap;
	class NiPhysXProp;
	class NiPhysXPropDesc;
	class NiPhysXActorDesc;
	class NiPhysXBodyDesc;
	class NiPhysXJointDesc;
	class NiPhysXD6JointDesc;
	class NiPhysXShapeDesc;
	class NiPhysXMeshDesc;
	class NiPhysXMaterialDesc;
	class NiPhysXDest;
	class NiPhysXRigidBodyDest;
	class NiPhysXTransformDest;
	class NiPhysXSrc;
	class NiPhysXRigidBodySrc;
	class NiPhysXKinematicSrc;
	class NiPhysXDynamicSrc;
	class NiLines;
	class NiLinesData;
	class NiScreenElementsData;
	class NiScreenElements;
	class NiRoomGroup;
	class NiRoom;
	class NiPortal;
	class BSFadeNode;
	class BSShaderProperty;
	class BSShaderLightingProperty;
	class BSShaderNoLightingProperty;
	class BSShaderPPLightingProperty;
	class BSEffectShaderPropertyFloatController;
	class BSEffectShaderPropertyColorController;
	class BSLightingShaderPropertyFloatController;
	class BSLightingShaderPropertyColorController;
	class BSNiAlphaPropertyTestRefController;
	class BSProceduralLightningController;
	class BSShaderTextureSet;
	class WaterShaderProperty;
	class SkyShaderProperty;
	class TileShaderProperty;
	class DistantLODShaderProperty;
	class BSDistantTreeShaderProperty;
	class TallGrassShaderProperty;
	class VolumetricFogShaderProperty;
	class HairShaderProperty;
	class Lighting30ShaderProperty;
	class BSLightingShaderProperty;
	class BSEffectShaderProperty;
	class BSWaterShaderProperty;
	class BSSkyShaderProperty;
	class BSDismemberSkinInstance;
	class BSDecalPlacementVectorExtraData;
	class BSPSysSimpleColorModifier;
	class BSValueNode;
	class BSStripParticleSystem;
	class BSStripPSysData;
	class BSPSysStripUpdateModifier;
	class BSMaterialEmittanceMultController;
	class BSMasterParticleSystem;
	class BSPSysMultiTargetEmitterCtlr;
	class BSRefractionStrengthController;
	class BSOrderedNode;
	class BSRangeNode;
	class BSBlastNode;
	class BSDamageStage;
	class BSRefractionFirePeriodController;
	class bhkConvexListShape;
	class BSTreadTransfInterpolator;
	class BSAnimNote;
	class BSAnimNotes;
	class bhkLiquidAction;
	class BSMultiBoundNode;
	class BSMultiBound;
	class BSMultiBoundData;
	class BSMultiBoundOBB;
	class BSMultiBoundSphere;
	class BSSegmentedTriShape;
	class BSMultiBoundAABB;
	class NiAdditionalGeometryData;
	class BSPackedAdditionalGeometryData;
	class BSWArray;
	class bhkAabbPhantom;
	class BSFrustumFOVController;
	class BSDebrisNode;
	class bhkBreakableConstraint;
	class bhkOrientHingedBodyAction;
	class bhkPoseArray;
	class bhkRagdollTemplate;
	class bhkRagdollTemplateData;
	class NiDataStream;
	class NiRenderObject;
	class NiMeshModifier;
	class NiMesh;
	class NiMorphWeightsController;
	class NiMorphMeshModifier;
	class NiSkinningMeshModifier;
	class NiMeshHWInstance;
	class NiInstancingMeshModifier;
	class NiSkinningLODController;
	class NiPSParticleSystem;
	class NiPSMeshParticleSystem;
	class NiPSFacingQuadGenerator;
	class NiPSAlignedQuadGenerator;
	class NiPSSimulator;
	class NiPSSimulatorStep;
	class NiPSSimulatorGeneralStep;
	class NiPSSimulatorForcesStep;
	class NiPSSimulatorCollidersStep;
	class NiPSSimulatorMeshAlignStep;
	class NiPSSimulatorFinalStep;
	class NiPSBoundUpdater;
	class NiPSForce;
	class NiPSDragForce;
	class NiPSGravityForce;
	class NiPSBombForce;
	class NiPSEmitter;
	class NiPSVolumeEmitter;
	class NiPSBoxEmitter;
	class NiPSSphereEmitter;
	class NiPSCylinderEmitter;
	class NiPSMeshEmitter;
	class NiPSEmitterCtlr;
	class NiPSEmitterFloatCtlr;
	class NiPSEmitParticlesCtlr;
	class NiPSForceCtlr;
	class NiPSForceBoolCtlr;
	class NiPSForceFloatCtlr;
	class NiPSForceActiveCtlr;
	class NiPSGravityStrengthCtlr;
	class NiPSEmitterSpeedCtlr;
	class NiPSEmitterRadiusCtlr;
	class NiPSEmitterDeclinationCtlr;
	class NiPSEmitterDeclinationVarCtlr;
	class NiPSEmitterPlanarAngleCtlr;
	class NiPSEmitterPlanarAngleVarCtlr;
	class NiPSEmitterRotAngleCtlr;
	class NiPSEmitterRotAngleVarCtlr;
	class NiPSEmitterRotSpeedCtlr;
	class NiPSEmitterRotSpeedVarCtlr;
	class NiPSEmitterLifeSpanCtlr;
	class NiPSResetOnLoopCtlr;
	class NiPSCollider;
	class NiPSPlanarCollider;
	class NiPSSphericalCollider;
	class NiPSSpawner;
	class NiEvaluator;
	class NiKeyBasedEvaluator;
	class NiBoolEvaluator;
	class NiBoolTimelineEvaluator;
	class NiColorEvaluator;
	class NiFloatEvaluator;
	class NiPoint3Evaluator;
	class NiQuaternionEvaluator;
	class NiTransformEvaluator;
	class NiConstBoolEvaluator;
	class NiConstColorEvaluator;
	class NiConstFloatEvaluator;
	class NiConstPoint3Evaluator;
	class NiConstQuaternionEvaluator;
	class NiConstTransformEvaluator;
	class NiBSplineEvaluator;
	class NiBSplineColorEvaluator;
	class NiBSplineCompColorEvaluator;
	class NiBSplineFloatEvaluator;
	class NiBSplineCompFloatEvaluator;
	class NiBSplinePoint3Evaluator;
	class NiBSplineCompPoint3Evaluator;
	class NiBSplineTransformEvaluator;
	class NiBSplineCompTransformEvaluator;
	class NiLookAtEvaluator;
	class NiPathEvaluator;
	class NiSequenceData;
	class NiShadowGenerator;
	class NiFurSpringController;
	class CStreamableAssetData;
	class bhkCompressedMeshShape;
	class bhkCompressedMeshShapeData;
	class BSInvMarker;
	class BSBoneLODExtraData;
	class BSBehaviorGraphExtraData;
	class BSLagBoneController;
	class BSLODTriShape;
	class BSFurnitureMarkerNode;
	class BSLeafAnimNode;
	class BSTreeNode;
	class BSTriShape;
	class BSMeshLODTriShape;
	class BSSubIndexTriShape;
	class bhkSystem;
	class bhkNPCollisionObject;
	class bhkPhysicsSystem;
	class bhkRagdollSystem;
	class BSExtraData;
	class BSClothExtraData;
	class BSSkin__Instance;
	class BSSkin__BoneData;
	class BSPositionData;
	class BSConnectPoint__Parents;
	class BSConnectPoint__Children;
	class BSEyeCenterExtraData;
	class BSPackedCombinedGeomDataExtra;
	class BSPackedCombinedSharedGeomDataExtra;
	class NiLightRadiusController;
	class BSDynamicTriShape;
	class BSDistantObjectLargeRefExtraData;

	class FieldVisitor {
	public:

		virtual inline void visit( Ref<NiPoint3Interpolator >&, const unsigned int field_index ) = 0;
		virtual inline void visit( ForceType&, const unsigned int field_index ) = 0;
		virtual inline void visit( KeyGroup<float >&, const unsigned int field_index ) = 0;
		virtual inline void visit( LightingShaderControlledVariable&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BoneVertData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiNode *&, const unsigned int field_index ) = 0;
		virtual inline void visit( AnimNoteType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< array<2,float > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( MipMapFormat&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<bhkEntity * >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Vector4 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSCPCullingType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPhysXRigidBodySrc >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<20,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiAVObject *&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< vector<ByteColor4 > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<ConstraintInfo >&, const unsigned int field_index ) = 0;
		virtual inline void visit( string&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<FurniturePosition >&, const unsigned int field_index ) = 0;
		virtual inline void visit( PrismaticDescriptor&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Key<Quaternion > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<LODInfo >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxJointDriveDesc&, const unsigned int field_index ) = 0;
		virtual inline void visit( LookAtFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiControllerSequence > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Matrix34&, const unsigned int field_index ) = 0;
		virtual inline void visit( Matrix33&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiParticleModifier >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSVectorFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxMaterialFlag&, const unsigned int field_index ) = 0;
		virtual inline void visit( SkyrimHavokMaterial&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxSpringDesc&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiTextKeyExtraData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPSSimulator >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< array<5,byte > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<BSShaderTextureSet >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPosData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<hkPackedNiTriStripsData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPalette >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< vector<OldSkinData > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<FxRadioButton * >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPSSpawner >&, const unsigned int field_index ) = 0;
		virtual inline void visit( AnimationType&, const unsigned int field_index ) = 0;
		virtual inline void visit( StencilCompareMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< vector<ByteColor3 > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Polygon >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<ControlledBlock >&, const unsigned int field_index ) = 0;
		virtual inline void visit( ConstraintData&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiPSParticleSystem *&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<4,short >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Vector3 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<3,Vector3 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiUVData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( AlphaFormat&, const unsigned int field_index ) = 0;
		virtual inline void visit( VertMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<bhkShape >&, const unsigned int field_index ) = 0;
		virtual inline void visit( InertiaMatrix&, const unsigned int field_index ) = 0;
		virtual inline void visit( PixelLayout&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<HavokFilter >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiAVObject * >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<PhysXStateName >&, const unsigned int field_index ) = 0;
		virtual inline void visit( SkyrimLayer&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NxMaterialDesc >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BallAndSocketDescriptor&, const unsigned int field_index ) = 0;
		virtual inline void visit( hkQuaternion&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiPSysColliderManager *&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<ComponentFormat >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiRawImageData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( bhkPositionConstraintMotor&, const unsigned int field_index ) = 0;
		virtual inline void visit( StencilAction&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxJointType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Quaternion&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<184,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSConnectPoint >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiSwitchFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxCapsule&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPhysXMaterialDesc >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiMesh >&, const unsigned int field_index ) = 0;
		virtual inline void visit( hkMotionType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPhysXBodyDesc >&, const unsigned int field_index ) = 0;
		virtual inline void visit( PropagationMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<bhkCompressedMeshShapeData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<ExtraMeshDataEpicMickey >&, const unsigned int field_index ) = 0;
		virtual inline void visit( VectorFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiDataStream >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<string >&, const unsigned int field_index ) = 0;
		virtual inline void visit( CapsuleBV&, const unsigned int field_index ) = 0;
		virtual inline void visit( SkyObjectType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSPackedAdditionalDataBlock >&, const unsigned int field_index ) = 0;
		virtual inline void visit( ColliderType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiBoolData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSTreadTransform >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiMesh * >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BillboardMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSPackedSharedGeomData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( short&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<bhkShape > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiPortal * >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<OblivionSubShape >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSPartFlag&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiAVObject >&, const unsigned int field_index ) = 0;
		virtual inline void visit( CycleType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiMeshModifier > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiAVObject > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( DecayType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiDynamicEffect > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSVertexData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( SkyrimShaderPropertyFlags1&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiLODData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<3,int >&, const unsigned int field_index ) = 0;
		virtual inline void visit( FormatPrefs&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiRoom * >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<2,unsigned int >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<AdditionalDataBlock >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiInstancingMeshModifier >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPSysSpawnModifier >&, const unsigned int field_index ) = 0;
		virtual inline void visit( float&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSPackedGeomData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( JointLinkPoint&, const unsigned int field_index ) = 0;
		virtual inline void visit( KeyType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiTransformData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( hkWorldObjCinfoProperty&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<12,float >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSGeometryPerSegmentSharedData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( ZCompareMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( ImageType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<BSSkin__BoneData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( LightColor&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<5,unsigned int >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<SkinInfoSet >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiDefaultAVObjectPalette >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSGeometrySubSegment >&, const unsigned int field_index ) = 0;
		virtual inline void visit( KeyGroup<Color4 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiObject >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Matrix22&, const unsigned int field_index ) = 0;
		virtual inline void visit( InterpBlendFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<7,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( bhkVelocityConstraintMotor&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiSourceTexture >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<float >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<hkWorldObjCinfoProperty >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPSEmitter > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiTriBasedGeom *&, const unsigned int field_index ) = 0;
		virtual inline void visit( MotorDescriptor&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxJointProjectionMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( bhkRigidBody *&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiPlane >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiNode >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiInterpolator > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPixelFormat >&, const unsigned int field_index ) = 0;
		virtual inline void visit( DataStreamAccess&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiBlendInterpolator >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<BSMultiBoundData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( StiffSpringDescriptor&, const unsigned int field_index ) = 0;
		virtual inline void visit( EmitFrom&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< array<4,unsigned short > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Key<byte > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( byte&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiSourceTexture > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( unsigned int&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<10,short >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BoxBV&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<3,float >&, const unsigned int field_index ) = 0;
		virtual inline void visit( FieldType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiBSplineData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( ConsistencyType&, const unsigned int field_index ) = 0;
		virtual inline void visit( PixelRepresentation&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<13,short >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Quaternion >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<unsigned short >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSDismemberBodyPartType&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<14,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( ShortString&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiNode > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( VelocityType&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<3,Color4 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPhysXActorDesc > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPhysXRigidBodyDest >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiBound >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<short >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<bhkCMSDChunk >&, const unsigned int field_index ) = 0;
		virtual inline void visit( RendererID&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiBound&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiObject > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<InterpBlendItem >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<SkinInfo >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<3,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiObjectNET *&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiParticleSystem *&, const unsigned int field_index ) = 0;
		virtual inline void visit( DataStreamUsage&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Matrix34 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( RagdollDescriptor&, const unsigned int field_index ) = 0;
		virtual inline void visit( SemanticData&, const unsigned int field_index ) = 0;
		virtual inline void visit( Fallout3HavokMaterial&, const unsigned int field_index ) = 0;
		virtual inline void visit( KeyGroup<byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( hkSolverDeactivation&, const unsigned int field_index ) = 0;
		virtual inline void visit( PixelTiling&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiFloatData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( EffectShaderControlledColor&, const unsigned int field_index ) = 0;
		virtual inline void visit( AlignMethod&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiDynamicEffect *&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<IndexString >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSPackedGeomObject >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiInterpolator >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPSSpawner > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Triangle&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<bhkCMSDBigTris >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<PhysXBodyStoredVels >&, const unsigned int field_index ) = 0;
		virtual inline void visit( MalleableDescriptor&, const unsigned int field_index ) = 0;
		virtual inline void visit( MaterialData&, const unsigned int field_index ) = 0;
		virtual inline void visit( ReferenceSystemDescriptor&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<8,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( hfloat&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<2,NiPhysXJointActor >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<TriangleData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPSBoundUpdater >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPSForce > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<bhkCMSDMaterial >&, const unsigned int field_index ) = 0;
		virtual inline void visit( PixelFormat&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiControllerManager *&, const unsigned int field_index ) = 0;
		virtual inline void visit( Fallout4ShaderPropertyFlags1&, const unsigned int field_index ) = 0;
		virtual inline void visit( Fallout4ShaderPropertyFlags2&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BoundingVolume >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiSkinData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( KeyGroup<Vector3 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<24,short >&, const unsigned int field_index ) = 0;
		virtual inline void visit( ByteArray&, const unsigned int field_index ) = 0;
		virtual inline void visit( PSForceType&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<4,unsigned int >&, const unsigned int field_index ) = 0;
		virtual inline void visit( hkResponseType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSGeometrySegmentData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( TexDesc&, const unsigned int field_index ) = 0;
		virtual inline void visit( JointAxisPoint&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPhysXMeshDesc >&, const unsigned int field_index ) = 0;
		virtual inline void visit( LimitedHingeDescriptor&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiMesh > >&, const unsigned int field_index ) = 0;
		template <typename T> inline void visit( vector<Key<T > >&, const unsigned int field_index );
		virtual inline void visit( vector< vector<float > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPSCollider > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<SemanticData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<16,ByteColor4 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<4,PixelFormatComponent >&, const unsigned int field_index ) = 0;
		virtual inline void visit( SkyrimShaderPropertyFlags2&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxShapeType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiNode * >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<292,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( FurnitureEntryPoints&, const unsigned int field_index ) = 0;
		virtual inline void visit( OblivionHavokMaterial&, const unsigned int field_index ) = 0;
		virtual inline void visit( PixelComponent&, const unsigned int field_index ) = 0;
		virtual inline void visit( ApplyMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Particle >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<ElementReference >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<ParticleDesc >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiBinaryVoxelData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Key<ByteColor4 > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( CloningBehavior&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSMasterParticleSystem *&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiAccumulator >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiObject *&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiMeshHWInstance > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<6,unsigned int >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiTriBasedGeom > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<4,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiPhysXJointLimit >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiExtraData > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( SkyrimWaterShaderFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( ByteColor4&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BoneData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSSkinBoneTrans >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiBone * >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiAlphaProperty >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<SyncPoint >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxD6JointDriveType&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<40,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( OblivionLayer&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiEvaluator > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( LightingShaderControlledColor&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<ShaderTexDesc >&, const unsigned int field_index ) = 0;
		virtual inline void visit( HingeDescriptor&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BonePose >&, const unsigned int field_index ) = 0;
		virtual inline void visit( TransformMethod&, const unsigned int field_index ) = 0;
		virtual inline void visit( MaterialColor&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiGeometryData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<4,KeyGroup<float > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Key<float > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( PlatformID&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxCombineMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< vector<unsigned int > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxD6JointMotion&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<BSAnimNote > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( EffectShaderControlledVariable&, const unsigned int field_index ) = 0;
		virtual inline void visit( SymmetryType&, const unsigned int field_index ) = 0;
		virtual inline void visit( PathFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiParticleSystemController *&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NiTransform >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<AbstractAdditionalGeometryData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Color4&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPSysData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( HalfSpaceBV&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BSPackedGeomDataCombined >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiBezierTriangle4 > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BoneLOD >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<MipMap >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSGeometrySegmentSharedData&, const unsigned int field_index ) = 0;
		virtual inline void visit( BroadPhaseType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<bhkConvexShape > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( PSLoopBehavior&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Vector3&, const unsigned int field_index ) = 0;
		virtual inline void visit( Vector4&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiMorphData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiPlane&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<SkinPartition >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<bhkSerializable > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPhysXShapeDesc > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<AVObject >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BodyPartList >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<hfloat >&, const unsigned int field_index ) = 0;
		virtual inline void visit( StringPalette&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<BSAnimNotes > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPhysXDest > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<12,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< vector<byte > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPhysXJointDesc > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< vector<TexCoord > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<5,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Triangle >&, const unsigned int field_index ) = 0;
		virtual inline void visit( hkDeactivatorType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiExtraData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<ConstraintData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPhysXPropDesc >&, const unsigned int field_index ) = 0;
		virtual inline void visit( HavokFilter&, const unsigned int field_index ) = 0;
		virtual inline void visit( bhkEntity *&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< vector<unsigned short > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<3,bool >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Fallout3Layer&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<NodeSet >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiSkinInstance >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiTriStripsData > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( LightMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<AdditionalDataInfo >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<bhkRigidBody * >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiColorData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiStringPalette >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSVertexDesc&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<BSShaderProperty >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiTimeController >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxPlane&, const unsigned int field_index ) = 0;
		virtual inline void visit( MeshPrimitiveType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<ExtraMeshDataEpicMickey2 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiVisData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSShaderType&, const unsigned int field_index ) = 0;
		virtual inline void visit( TexType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<bhkSystem >&, const unsigned int field_index ) = 0;
		virtual inline void visit( TexCoord&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<bhkWorldObject >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiFloatInterpolator >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Color4 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiProperty > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BoundVolumeType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPSSimulatorStep > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<256,ByteColor4 >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<MatchGroup >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<3,unsigned int >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<LODRange >&, const unsigned int field_index ) = 0;
		virtual inline void visit( CoordGenType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiPSysModifier > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<MorphWeight >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<PSSpawnRateKey >&, const unsigned int field_index ) = 0;
		virtual inline void visit( BoundingVolume&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<BSAnimNotes >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<bhkCMSDTransform >&, const unsigned int field_index ) = 0;
		virtual inline void visit( StencilDrawMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiCollisionObject >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiTransform&, const unsigned int field_index ) = 0;
		virtual inline void visit( array< 7, array<12,byte > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( NiQuatTransform&, const unsigned int field_index ) = 0;
		virtual inline void visit( CollisionMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( TextureType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Matrix44&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSValueNodeFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiImage >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector< array<6,unsigned short > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<3,KeyGroup<float > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Color3&, const unsigned int field_index ) = 0;
		virtual inline void visit( unsigned short&, const unsigned int field_index ) = 0;
		virtual inline void visit( hkQualityType&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<int >&, const unsigned int field_index ) = 0;
		virtual inline void visit( TransformMember&, const unsigned int field_index ) = 0;
		virtual inline void visit( bhkCOFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSShaderFlags2&, const unsigned int field_index ) = 0;
		virtual inline void visit( hkConstraintType&, const unsigned int field_index ) = 0;
		virtual inline void visit( SortingMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Key<IndexString > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<7,float >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<DecalVectorArray >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<bool >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<BSMultiBound >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Ref<NiImage > >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPSysCollider >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiRotData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( bhkSpringDamperConstraintMotor&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiBSplineBasisData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Region >&, const unsigned int field_index ) = 0;
		virtual inline void visit( int&, const unsigned int field_index ) = 0;
		virtual inline void visit( HavokMaterial&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<Morph >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<6,byte >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiKeyframeData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( TexFilterMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<DataStreamRef >&, const unsigned int field_index ) = 0;
		virtual inline void visit( bool&, const unsigned int field_index ) = 0;
		virtual inline void visit( MoppDataBuildType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPSysEmitterCtlrData >&, const unsigned int field_index ) = 0;
		virtual inline void visit( IndexString&, const unsigned int field_index ) = 0;
		virtual inline void visit( AccumFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( MotorType&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSLightingShaderPropertyShaderType&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPhysXActorDesc >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<BoneTransform >&, const unsigned int field_index ) = 0;
		virtual inline void visit( array<21,float >&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiPSysModifier >&, const unsigned int field_index ) = 0;
		virtual inline void visit( TexClampMode&, const unsigned int field_index ) = 0;
		virtual inline void visit( BSShaderFlags&, const unsigned int field_index ) = 0;
		virtual inline void visit( NxJointLimitSoftDesc&, const unsigned int field_index ) = 0;
		virtual inline void visit( Ref<NiSkinPartition >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<PhysXMaterialRef >&, const unsigned int field_index ) = 0;
		virtual inline void visit( vector<unsigned int >&, const unsigned int field_index ) = 0;

	};

	template <typename Delegate>
	class FieldVisitorImpl : public FieldVisitor {
	public:
		virtual inline void visit( Ref<NiPoint3Interpolator >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ForceType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( KeyGroup<float >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( LightingShaderControlledVariable& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BoneVertData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiNode *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( AnimNoteType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< array<2,float > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( MipMapFormat& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<bhkEntity * >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Vector4 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSCPCullingType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPhysXRigidBodySrc >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<20,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiAVObject *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< vector<ByteColor4 > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<ConstraintInfo >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( string& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<FurniturePosition >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PrismaticDescriptor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Key<Quaternion > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<LODInfo >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxJointDriveDesc& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( LookAtFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiControllerSequence > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Matrix34& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Matrix33& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiParticleModifier >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSVectorFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxMaterialFlag& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( SkyrimHavokMaterial& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxSpringDesc& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiTextKeyExtraData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPSSimulator >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< array<5,byte > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<BSShaderTextureSet >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPosData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<hkPackedNiTriStripsData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPalette >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< vector<OldSkinData > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<FxRadioButton * >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPSSpawner >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( AnimationType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( StencilCompareMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< vector<ByteColor3 > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Polygon >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<ControlledBlock >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ConstraintData& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiPSParticleSystem *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<4,short >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Vector3 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<3,Vector3 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiUVData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( AlphaFormat& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( VertMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<bhkShape >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( InertiaMatrix& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PixelLayout& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<HavokFilter >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiAVObject * >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<PhysXStateName >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( SkyrimLayer& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NxMaterialDesc >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BallAndSocketDescriptor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( hkQuaternion& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiPSysColliderManager *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<ComponentFormat >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiRawImageData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( bhkPositionConstraintMotor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( StencilAction& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxJointType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Quaternion& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<184,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSConnectPoint >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiSwitchFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxCapsule& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPhysXMaterialDesc >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiMesh >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( hkMotionType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPhysXBodyDesc >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PropagationMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<bhkCompressedMeshShapeData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<ExtraMeshDataEpicMickey >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( VectorFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiDataStream >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<string >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( CapsuleBV& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( SkyObjectType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSPackedAdditionalDataBlock >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ColliderType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiBoolData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSTreadTransform >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiMesh * >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BillboardMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSPackedSharedGeomData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( short& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<bhkShape > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiPortal * >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<OblivionSubShape >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSPartFlag& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiAVObject >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( CycleType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiMeshModifier > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiAVObject > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( DecayType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiDynamicEffect > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSVertexData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( SkyrimShaderPropertyFlags1& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiLODData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<3,int >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( FormatPrefs& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiRoom * >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<2,unsigned int >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<AdditionalDataBlock >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiInstancingMeshModifier >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPSysSpawnModifier >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( float& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSPackedGeomData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( JointLinkPoint& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( KeyType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiTransformData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( hkWorldObjCinfoProperty& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<12,float >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSGeometryPerSegmentSharedData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ZCompareMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ImageType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<BSSkin__BoneData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( LightColor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<5,unsigned int >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<SkinInfoSet >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiDefaultAVObjectPalette >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSGeometrySubSegment >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( KeyGroup<Color4 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiObject >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Matrix22& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( InterpBlendFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<7,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( bhkVelocityConstraintMotor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiSourceTexture >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<float >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<hkWorldObjCinfoProperty >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPSEmitter > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiTriBasedGeom *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( MotorDescriptor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxJointProjectionMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( bhkRigidBody *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiPlane >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiNode >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiInterpolator > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPixelFormat >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( DataStreamAccess& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiBlendInterpolator >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<BSMultiBoundData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( StiffSpringDescriptor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( EmitFrom& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< array<4,unsigned short > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Key<byte > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( byte& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiSourceTexture > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( unsigned int& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<10,short >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BoxBV& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<3,float >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( FieldType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiBSplineData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ConsistencyType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PixelRepresentation& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<13,short >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Quaternion >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<unsigned short >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSDismemberBodyPartType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<14,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ShortString& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiNode > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( VelocityType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<3,Color4 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPhysXActorDesc > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPhysXRigidBodyDest >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiBound >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<short >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<bhkCMSDChunk >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( RendererID& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiBound& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiObject > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<InterpBlendItem >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<SkinInfo >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<3,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiObjectNET *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiParticleSystem *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( DataStreamUsage& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Matrix34 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( RagdollDescriptor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( SemanticData& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Fallout3HavokMaterial& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( KeyGroup<byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( hkSolverDeactivation& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PixelTiling& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiFloatData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( EffectShaderControlledColor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( AlignMethod& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiDynamicEffect *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<IndexString >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSPackedGeomObject >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiInterpolator >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPSSpawner > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Triangle& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<bhkCMSDBigTris >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<PhysXBodyStoredVels >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( MalleableDescriptor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( MaterialData& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ReferenceSystemDescriptor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<8,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( hfloat& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<2,NiPhysXJointActor >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<TriangleData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPSBoundUpdater >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPSForce > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<bhkCMSDMaterial >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PixelFormat& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiControllerManager *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Fallout4ShaderPropertyFlags1& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Fallout4ShaderPropertyFlags2& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BoundingVolume >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiSkinData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( KeyGroup<Vector3 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<24,short >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ByteArray& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PSForceType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<4,unsigned int >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( hkResponseType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSGeometrySegmentData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( TexDesc& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( JointAxisPoint& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPhysXMeshDesc >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( LimitedHingeDescriptor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiMesh > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		template <typename T> inline void visit( vector<Key<T > >&, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< vector<float > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPSCollider > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<SemanticData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<16,ByteColor4 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<4,PixelFormatComponent >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( SkyrimShaderPropertyFlags2& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxShapeType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiNode * >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<292,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( FurnitureEntryPoints& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( OblivionHavokMaterial& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PixelComponent& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ApplyMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Particle >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<ElementReference >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<ParticleDesc >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiBinaryVoxelData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Key<ByteColor4 > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( CloningBehavior& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSMasterParticleSystem *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiAccumulator >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiObject *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiMeshHWInstance > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<6,unsigned int >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiTriBasedGeom > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<4,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiPhysXJointLimit >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiExtraData > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( SkyrimWaterShaderFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( ByteColor4& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BoneData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSSkinBoneTrans >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiBone * >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiAlphaProperty >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<SyncPoint >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxD6JointDriveType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<40,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( OblivionLayer& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiEvaluator > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( LightingShaderControlledColor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<ShaderTexDesc >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( HingeDescriptor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BonePose >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( TransformMethod& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( MaterialColor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiGeometryData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<4,KeyGroup<float > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Key<float > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PlatformID& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxCombineMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< vector<unsigned int > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxD6JointMotion& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<BSAnimNote > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( EffectShaderControlledVariable& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( SymmetryType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PathFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiParticleSystemController *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NiTransform >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<AbstractAdditionalGeometryData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Color4& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPSysData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( HalfSpaceBV& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BSPackedGeomDataCombined >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiBezierTriangle4 > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BoneLOD >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<MipMap >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSGeometrySegmentSharedData& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BroadPhaseType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<bhkConvexShape > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( PSLoopBehavior& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Vector3& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Vector4& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiMorphData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiPlane& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<SkinPartition >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<bhkSerializable > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPhysXShapeDesc > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<AVObject >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BodyPartList >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<hfloat >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( StringPalette& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<BSAnimNotes > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPhysXDest > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<12,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< vector<byte > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPhysXJointDesc > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< vector<TexCoord > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<5,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Triangle >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( hkDeactivatorType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiExtraData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<ConstraintData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPhysXPropDesc >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( HavokFilter& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( bhkEntity *& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< vector<unsigned short > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<3,bool >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Fallout3Layer& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<NodeSet >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiSkinInstance >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiTriStripsData > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( LightMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<AdditionalDataInfo >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<bhkRigidBody * >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiColorData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiStringPalette >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSVertexDesc& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<BSShaderProperty >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiTimeController >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxPlane& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( MeshPrimitiveType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<ExtraMeshDataEpicMickey2 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiVisData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSShaderType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( TexType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<bhkSystem >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( TexCoord& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<bhkWorldObject >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiFloatInterpolator >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Color4 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiProperty > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BoundVolumeType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPSSimulatorStep > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<256,ByteColor4 >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<MatchGroup >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<3,unsigned int >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<LODRange >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( CoordGenType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiPSysModifier > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<MorphWeight >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<PSSpawnRateKey >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BoundingVolume& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<BSAnimNotes >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<bhkCMSDTransform >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( StencilDrawMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiCollisionObject >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiTransform& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array< 7, array<12,byte > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NiQuatTransform& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( CollisionMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( TextureType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Matrix44& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSValueNodeFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiImage >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector< array<6,unsigned short > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<3,KeyGroup<float > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Color3& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( unsigned short& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( hkQualityType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<int >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( TransformMember& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( bhkCOFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSShaderFlags2& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( hkConstraintType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( SortingMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Key<IndexString > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<7,float >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<DecalVectorArray >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<bool >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<BSMultiBound >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Ref<NiImage > >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPSysCollider >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiRotData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( bhkSpringDamperConstraintMotor& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiBSplineBasisData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Region >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( int& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( HavokMaterial& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<Morph >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<6,byte >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiKeyframeData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( TexFilterMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<DataStreamRef >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( bool& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( MoppDataBuildType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPSysEmitterCtlrData >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( IndexString& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( AccumFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( MotorType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSLightingShaderPropertyShaderType& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPhysXActorDesc >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<BoneTransform >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( array<21,float >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiPSysModifier >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( TexClampMode& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( BSShaderFlags& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( NxJointLimitSoftDesc& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( Ref<NiSkinPartition >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<PhysXMaterialRef >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
		virtual inline void visit( vector<unsigned int >& in, const unsigned int field_index ) { delegate.visit(in, field_index);}
	protected:
		Delegate& delegate;
	public:
		FieldVisitorImpl(Delegate& impl) : delegate(impl) {}
	};
}
#endif
