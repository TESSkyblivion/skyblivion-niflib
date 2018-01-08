#ifndef __NIOBJECT_VISITOR_H_
#define __NIOBJECT_VISITOR_H_
/* Copyright (c) 2018, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

namespace Niflib {
	struct NifInfo;
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

	class Visitor {
	public:
		virtual inline void start(NiObject&, const NifInfo&) = 0;
		virtual inline void end(NiObject&, const NifInfo&) = 0;

		virtual inline void visit( Ni3dsAlphaAnimator&, const NifInfo & ) = 0;
		virtual inline void visit( Ni3dsAnimationNode&, const NifInfo & ) = 0;
		virtual inline void visit( Ni3dsColorAnimator&, const NifInfo & ) = 0;
		virtual inline void visit( Ni3dsMorphShape&, const NifInfo & ) = 0;
		virtual inline void visit( Ni3dsParticleSystem&, const NifInfo & ) = 0;
		virtual inline void visit( Ni3dsPathController&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysCollider&, const NifInfo & ) = 0;
		virtual inline void visit( bhkRefObject&, const NifInfo & ) = 0;
		virtual inline void visit( bhkSerializable&, const NifInfo & ) = 0;
		virtual inline void visit( bhkWorldObject&, const NifInfo & ) = 0;
		virtual inline void visit( bhkPhantom&, const NifInfo & ) = 0;
		virtual inline void visit( bhkShapePhantom&, const NifInfo & ) = 0;
		virtual inline void visit( bhkSimpleShapePhantom&, const NifInfo & ) = 0;
		virtual inline void visit( bhkEntity&, const NifInfo & ) = 0;
		virtual inline void visit( bhkRigidBody&, const NifInfo & ) = 0;
		virtual inline void visit( bhkRigidBodyT&, const NifInfo & ) = 0;
		virtual inline void visit( bhkConstraint&, const NifInfo & ) = 0;
		virtual inline void visit( bhkLimitedHingeConstraint&, const NifInfo & ) = 0;
		virtual inline void visit( bhkMalleableConstraint&, const NifInfo & ) = 0;
		virtual inline void visit( bhkStiffSpringConstraint&, const NifInfo & ) = 0;
		virtual inline void visit( bhkRagdollConstraint&, const NifInfo & ) = 0;
		virtual inline void visit( bhkPrismaticConstraint&, const NifInfo & ) = 0;
		virtual inline void visit( bhkHingeConstraint&, const NifInfo & ) = 0;
		virtual inline void visit( bhkBallAndSocketConstraint&, const NifInfo & ) = 0;
		virtual inline void visit( bhkBallSocketConstraintChain&, const NifInfo & ) = 0;
		virtual inline void visit( bhkShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkTransformShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkSphereRepShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkConvexShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkSphereShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkCapsuleShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkBoxShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkConvexVerticesShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkConvexTransformShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkConvexSweepShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkMultiSphereShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkBvTreeShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkMoppBvTreeShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkShapeCollection&, const NifInfo & ) = 0;
		virtual inline void visit( bhkListShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkMeshShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkPackedNiTriStripsShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkNiTriStripsShape&, const NifInfo & ) = 0;
		virtual inline void visit( NiExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiKeyBasedInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiFloatInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiTransformInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiPoint3Interpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiPathInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBoolInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBoolTimelineInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBlendInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiObjectNET&, const NifInfo & ) = 0;
		virtual inline void visit( NiCollisionObject&, const NifInfo & ) = 0;
		virtual inline void visit( NiCollisionData&, const NifInfo & ) = 0;
		virtual inline void visit( bhkNiCollisionObject&, const NifInfo & ) = 0;
		virtual inline void visit( bhkCollisionObject&, const NifInfo & ) = 0;
		virtual inline void visit( bhkBlendCollisionObject&, const NifInfo & ) = 0;
		virtual inline void visit( bhkPCollisionObject&, const NifInfo & ) = 0;
		virtual inline void visit( bhkSPCollisionObject&, const NifInfo & ) = 0;
		virtual inline void visit( NiAVObject&, const NifInfo & ) = 0;
		virtual inline void visit( NiDynamicEffect&, const NifInfo & ) = 0;
		virtual inline void visit( NiLight&, const NifInfo & ) = 0;
		virtual inline void visit( NiProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiTransparentProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysVolumeEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiTimeController&, const NifInfo & ) = 0;
		virtual inline void visit( NiInterpController&, const NifInfo & ) = 0;
		virtual inline void visit( NiMultiTargetTransformController&, const NifInfo & ) = 0;
		virtual inline void visit( NiGeomMorpherController&, const NifInfo & ) = 0;
		virtual inline void visit( NiMorphController&, const NifInfo & ) = 0;
		virtual inline void visit( NiMorpherController&, const NifInfo & ) = 0;
		virtual inline void visit( NiSingleInterpController&, const NifInfo & ) = 0;
		virtual inline void visit( NiKeyframeController&, const NifInfo & ) = 0;
		virtual inline void visit( NiTransformController&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysModifierCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitterCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysModifierBoolCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysModifierActiveCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysModifierFloatCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitterDeclinationCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitterDeclinationVarCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitterInitialRadiusCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitterLifeSpanCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitterSpeedCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysGravityStrengthCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiFloatInterpController&, const NifInfo & ) = 0;
		virtual inline void visit( NiFlipController&, const NifInfo & ) = 0;
		virtual inline void visit( NiAlphaController&, const NifInfo & ) = 0;
		virtual inline void visit( NiTextureTransformController&, const NifInfo & ) = 0;
		virtual inline void visit( NiLightDimmerController&, const NifInfo & ) = 0;
		virtual inline void visit( NiBoolInterpController&, const NifInfo & ) = 0;
		virtual inline void visit( NiVisController&, const NifInfo & ) = 0;
		virtual inline void visit( NiPoint3InterpController&, const NifInfo & ) = 0;
		virtual inline void visit( NiMaterialColorController&, const NifInfo & ) = 0;
		virtual inline void visit( NiLightColorController&, const NifInfo & ) = 0;
		virtual inline void visit( NiExtraDataController&, const NifInfo & ) = 0;
		virtual inline void visit( NiFloatExtraDataController&, const NifInfo & ) = 0;
		virtual inline void visit( NiFloatsExtraDataController&, const NifInfo & ) = 0;
		virtual inline void visit( NiFloatsExtraDataPoint3Controller&, const NifInfo & ) = 0;
		virtual inline void visit( NiBoneLODController&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSBoneLODController&, const NifInfo & ) = 0;
		virtual inline void visit( NiGeometry&, const NifInfo & ) = 0;
		virtual inline void visit( NiTriBasedGeom&, const NifInfo & ) = 0;
		virtual inline void visit( NiGeometryData&, const NifInfo & ) = 0;
		virtual inline void visit( AbstractAdditionalGeometryData&, const NifInfo & ) = 0;
		virtual inline void visit( NiTriBasedGeomData&, const NifInfo & ) = 0;
		virtual inline void visit( bhkBlendController&, const NifInfo & ) = 0;
		virtual inline void visit( BSBound&, const NifInfo & ) = 0;
		virtual inline void visit( BSFurnitureMarker&, const NifInfo & ) = 0;
		virtual inline void visit( BSParentVelocityModifier&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysArrayEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( BSWindModifier&, const NifInfo & ) = 0;
		virtual inline void visit( hkPackedNiTriStripsData&, const NifInfo & ) = 0;
		virtual inline void visit( NiAlphaProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiAmbientLight&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticlesData&, const NifInfo & ) = 0;
		virtual inline void visit( NiRotatingParticlesData&, const NifInfo & ) = 0;
		virtual inline void visit( NiAutoNormalParticlesData&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysData&, const NifInfo & ) = 0;
		virtual inline void visit( NiMeshPSysData&, const NifInfo & ) = 0;
		virtual inline void visit( NiBinaryExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiBinaryVoxelExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiBinaryVoxelData&, const NifInfo & ) = 0;
		virtual inline void visit( NiBlendBoolInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBlendFloatInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBlendPoint3Interpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBlendTransformInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBoolData&, const NifInfo & ) = 0;
		virtual inline void visit( NiBooleanExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineBasisData&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineFloatInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineCompFloatInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplinePoint3Interpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineCompPoint3Interpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineTransformInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineCompTransformInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( BSRotAccumTransfInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineData&, const NifInfo & ) = 0;
		virtual inline void visit( NiCamera&, const NifInfo & ) = 0;
		virtual inline void visit( NiColorData&, const NifInfo & ) = 0;
		virtual inline void visit( NiColorExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiControllerManager&, const NifInfo & ) = 0;
		virtual inline void visit( NiSequence&, const NifInfo & ) = 0;
		virtual inline void visit( NiControllerSequence&, const NifInfo & ) = 0;
		virtual inline void visit( NiAVObjectPalette&, const NifInfo & ) = 0;
		virtual inline void visit( NiDefaultAVObjectPalette&, const NifInfo & ) = 0;
		virtual inline void visit( NiDirectionalLight&, const NifInfo & ) = 0;
		virtual inline void visit( NiDitherProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiRollController&, const NifInfo & ) = 0;
		virtual inline void visit( NiFloatData&, const NifInfo & ) = 0;
		virtual inline void visit( NiFloatExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiFloatsExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiFogProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiGravity&, const NifInfo & ) = 0;
		virtual inline void visit( NiIntegerExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( BSXFlags&, const NifInfo & ) = 0;
		virtual inline void visit( NiIntegersExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( BSKeyframeController&, const NifInfo & ) = 0;
		virtual inline void visit( NiKeyframeData&, const NifInfo & ) = 0;
		virtual inline void visit( NiLookAtController&, const NifInfo & ) = 0;
		virtual inline void visit( NiLookAtInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( NiMaterialProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiMorphData&, const NifInfo & ) = 0;
		virtual inline void visit( NiNode&, const NifInfo & ) = 0;
		virtual inline void visit( NiBone&, const NifInfo & ) = 0;
		virtual inline void visit( AvoidNode&, const NifInfo & ) = 0;
		virtual inline void visit( FxWidget&, const NifInfo & ) = 0;
		virtual inline void visit( FxButton&, const NifInfo & ) = 0;
		virtual inline void visit( FxRadioButton&, const NifInfo & ) = 0;
		virtual inline void visit( NiBillboardNode&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSAnimationNode&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSParticleNode&, const NifInfo & ) = 0;
		virtual inline void visit( NiSwitchNode&, const NifInfo & ) = 0;
		virtual inline void visit( NiLODNode&, const NifInfo & ) = 0;
		virtual inline void visit( NiPalette&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleBomb&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleColorModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleGrowFade&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleMeshModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleRotation&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticles&, const NifInfo & ) = 0;
		virtual inline void visit( NiAutoNormalParticles&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleMeshes&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleMeshesData&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleSystem&, const NifInfo & ) = 0;
		virtual inline void visit( NiMeshParticleSystem&, const NifInfo & ) = 0;
		virtual inline void visit( NiParticleSystemController&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSPArrayController&, const NifInfo & ) = 0;
		virtual inline void visit( NiPathController&, const NifInfo & ) = 0;
		virtual inline void visit( NiPixelFormat&, const NifInfo & ) = 0;
		virtual inline void visit( NiPersistentSrcTextureRendererData&, const NifInfo & ) = 0;
		virtual inline void visit( NiPixelData&, const NifInfo & ) = 0;
		virtual inline void visit( NiPlanarCollider&, const NifInfo & ) = 0;
		virtual inline void visit( NiPointLight&, const NifInfo & ) = 0;
		virtual inline void visit( NiPosData&, const NifInfo & ) = 0;
		virtual inline void visit( NiRotData&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysAgeDeathModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysBombModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysBoundUpdateModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysBoxEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysColliderManager&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysColorModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysCylinderEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysDragModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitterCtlrData&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysGravityModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysGrowFadeModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysMeshEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysMeshUpdateModifier&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysInheritVelocityModifier&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysHavokUpdateModifier&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysRecycleBoundModifier&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysSubTexModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysPlanarCollider&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysSphericalCollider&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysPositionModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysResetOnLoopCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysRotationModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysSpawnModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysSphereEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysUpdateCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysFieldModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysVortexFieldModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysGravityFieldModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysDragFieldModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysTurbulenceFieldModifier&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysLODModifier&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysScaleModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysFieldMagnitudeCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysFieldAttenuationCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysFieldMaxDistanceCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysAirFieldAirFrictionCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysAirFieldInheritVelocityCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysAirFieldSpreadCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysInitialRotSpeedCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysInitialRotSpeedVarCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysInitialRotAngleCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysInitialRotAngleVarCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitterPlanarAngleCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysEmitterPlanarAngleVarCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysAirFieldModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysTrailEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiLightIntensityController&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSysRadialFieldModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiLODData&, const NifInfo & ) = 0;
		virtual inline void visit( NiRangeLODData&, const NifInfo & ) = 0;
		virtual inline void visit( NiScreenLODData&, const NifInfo & ) = 0;
		virtual inline void visit( NiRotatingParticles&, const NifInfo & ) = 0;
		virtual inline void visit( NiSequenceStreamHelper&, const NifInfo & ) = 0;
		virtual inline void visit( NiShadeProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiSkinData&, const NifInfo & ) = 0;
		virtual inline void visit( NiSkinInstance&, const NifInfo & ) = 0;
		virtual inline void visit( NiTriShapeSkinController&, const NifInfo & ) = 0;
		virtual inline void visit( NiClodSkinInstance&, const NifInfo & ) = 0;
		virtual inline void visit( NiSkinPartition&, const NifInfo & ) = 0;
		virtual inline void visit( NiTexture&, const NifInfo & ) = 0;
		virtual inline void visit( NiSourceTexture&, const NifInfo & ) = 0;
		virtual inline void visit( NiSpecularProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiSphericalCollider&, const NifInfo & ) = 0;
		virtual inline void visit( NiSpotLight&, const NifInfo & ) = 0;
		virtual inline void visit( NiStencilProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiStringExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiStringPalette&, const NifInfo & ) = 0;
		virtual inline void visit( NiStringsExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiTextKeyExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiTextureEffect&, const NifInfo & ) = 0;
		virtual inline void visit( NiTextureModeProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiImage&, const NifInfo & ) = 0;
		virtual inline void visit( NiTextureProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiTexturingProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiMultiTextureProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiTransformData&, const NifInfo & ) = 0;
		virtual inline void visit( NiTriShape&, const NifInfo & ) = 0;
		virtual inline void visit( NiTriShapeData&, const NifInfo & ) = 0;
		virtual inline void visit( NiTriStrips&, const NifInfo & ) = 0;
		virtual inline void visit( NiTriStripsData&, const NifInfo & ) = 0;
		virtual inline void visit( NiEnvMappedTriShape&, const NifInfo & ) = 0;
		virtual inline void visit( NiEnvMappedTriShapeData&, const NifInfo & ) = 0;
		virtual inline void visit( NiBezierTriangle4&, const NifInfo & ) = 0;
		virtual inline void visit( NiBezierMesh&, const NifInfo & ) = 0;
		virtual inline void visit( NiClod&, const NifInfo & ) = 0;
		virtual inline void visit( NiClodData&, const NifInfo & ) = 0;
		virtual inline void visit( NiUVController&, const NifInfo & ) = 0;
		virtual inline void visit( NiUVData&, const NifInfo & ) = 0;
		virtual inline void visit( NiVectorExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiVertexColorProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiVertWeightsExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( NiVisData&, const NifInfo & ) = 0;
		virtual inline void visit( NiWireframeProperty&, const NifInfo & ) = 0;
		virtual inline void visit( NiZBufferProperty&, const NifInfo & ) = 0;
		virtual inline void visit( RootCollisionNode&, const NifInfo & ) = 0;
		virtual inline void visit( NiRawImageData&, const NifInfo & ) = 0;
		virtual inline void visit( NiAccumulator&, const NifInfo & ) = 0;
		virtual inline void visit( NiSortAdjustNode&, const NifInfo & ) = 0;
		virtual inline void visit( NiSourceCubeMap&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXProp&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXPropDesc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXActorDesc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXBodyDesc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXJointDesc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXD6JointDesc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXShapeDesc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXMeshDesc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXMaterialDesc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXDest&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXRigidBodyDest&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXTransformDest&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXSrc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXRigidBodySrc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXKinematicSrc&, const NifInfo & ) = 0;
		virtual inline void visit( NiPhysXDynamicSrc&, const NifInfo & ) = 0;
		virtual inline void visit( NiLines&, const NifInfo & ) = 0;
		virtual inline void visit( NiLinesData&, const NifInfo & ) = 0;
		virtual inline void visit( NiScreenElementsData&, const NifInfo & ) = 0;
		virtual inline void visit( NiScreenElements&, const NifInfo & ) = 0;
		virtual inline void visit( NiRoomGroup&, const NifInfo & ) = 0;
		virtual inline void visit( NiRoom&, const NifInfo & ) = 0;
		virtual inline void visit( NiPortal&, const NifInfo & ) = 0;
		virtual inline void visit( BSFadeNode&, const NifInfo & ) = 0;
		virtual inline void visit( BSShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSShaderLightingProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSShaderNoLightingProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSShaderPPLightingProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSEffectShaderPropertyFloatController&, const NifInfo & ) = 0;
		virtual inline void visit( BSEffectShaderPropertyColorController&, const NifInfo & ) = 0;
		virtual inline void visit( BSLightingShaderPropertyFloatController&, const NifInfo & ) = 0;
		virtual inline void visit( BSLightingShaderPropertyColorController&, const NifInfo & ) = 0;
		virtual inline void visit( BSNiAlphaPropertyTestRefController&, const NifInfo & ) = 0;
		virtual inline void visit( BSProceduralLightningController&, const NifInfo & ) = 0;
		virtual inline void visit( BSShaderTextureSet&, const NifInfo & ) = 0;
		virtual inline void visit( WaterShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( SkyShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( TileShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( DistantLODShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSDistantTreeShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( TallGrassShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( VolumetricFogShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( HairShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( Lighting30ShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSLightingShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSEffectShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSWaterShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSSkyShaderProperty&, const NifInfo & ) = 0;
		virtual inline void visit( BSDismemberSkinInstance&, const NifInfo & ) = 0;
		virtual inline void visit( BSDecalPlacementVectorExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysSimpleColorModifier&, const NifInfo & ) = 0;
		virtual inline void visit( BSValueNode&, const NifInfo & ) = 0;
		virtual inline void visit( BSStripParticleSystem&, const NifInfo & ) = 0;
		virtual inline void visit( BSStripPSysData&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysStripUpdateModifier&, const NifInfo & ) = 0;
		virtual inline void visit( BSMaterialEmittanceMultController&, const NifInfo & ) = 0;
		virtual inline void visit( BSMasterParticleSystem&, const NifInfo & ) = 0;
		virtual inline void visit( BSPSysMultiTargetEmitterCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( BSRefractionStrengthController&, const NifInfo & ) = 0;
		virtual inline void visit( BSOrderedNode&, const NifInfo & ) = 0;
		virtual inline void visit( BSRangeNode&, const NifInfo & ) = 0;
		virtual inline void visit( BSBlastNode&, const NifInfo & ) = 0;
		virtual inline void visit( BSDamageStage&, const NifInfo & ) = 0;
		virtual inline void visit( BSRefractionFirePeriodController&, const NifInfo & ) = 0;
		virtual inline void visit( bhkConvexListShape&, const NifInfo & ) = 0;
		virtual inline void visit( BSTreadTransfInterpolator&, const NifInfo & ) = 0;
		virtual inline void visit( BSAnimNote&, const NifInfo & ) = 0;
		virtual inline void visit( BSAnimNotes&, const NifInfo & ) = 0;
		virtual inline void visit( bhkLiquidAction&, const NifInfo & ) = 0;
		virtual inline void visit( BSMultiBoundNode&, const NifInfo & ) = 0;
		virtual inline void visit( BSMultiBound&, const NifInfo & ) = 0;
		virtual inline void visit( BSMultiBoundData&, const NifInfo & ) = 0;
		virtual inline void visit( BSMultiBoundOBB&, const NifInfo & ) = 0;
		virtual inline void visit( BSMultiBoundSphere&, const NifInfo & ) = 0;
		virtual inline void visit( BSSegmentedTriShape&, const NifInfo & ) = 0;
		virtual inline void visit( BSMultiBoundAABB&, const NifInfo & ) = 0;
		virtual inline void visit( NiAdditionalGeometryData&, const NifInfo & ) = 0;
		virtual inline void visit( BSPackedAdditionalGeometryData&, const NifInfo & ) = 0;
		virtual inline void visit( BSWArray&, const NifInfo & ) = 0;
		virtual inline void visit( bhkAabbPhantom&, const NifInfo & ) = 0;
		virtual inline void visit( BSFrustumFOVController&, const NifInfo & ) = 0;
		virtual inline void visit( BSDebrisNode&, const NifInfo & ) = 0;
		virtual inline void visit( bhkBreakableConstraint&, const NifInfo & ) = 0;
		virtual inline void visit( bhkOrientHingedBodyAction&, const NifInfo & ) = 0;
		virtual inline void visit( bhkPoseArray&, const NifInfo & ) = 0;
		virtual inline void visit( bhkRagdollTemplate&, const NifInfo & ) = 0;
		virtual inline void visit( bhkRagdollTemplateData&, const NifInfo & ) = 0;
		virtual inline void visit( NiDataStream&, const NifInfo & ) = 0;
		virtual inline void visit( NiRenderObject&, const NifInfo & ) = 0;
		virtual inline void visit( NiMeshModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiMesh&, const NifInfo & ) = 0;
		virtual inline void visit( NiMorphWeightsController&, const NifInfo & ) = 0;
		virtual inline void visit( NiMorphMeshModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiSkinningMeshModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiMeshHWInstance&, const NifInfo & ) = 0;
		virtual inline void visit( NiInstancingMeshModifier&, const NifInfo & ) = 0;
		virtual inline void visit( NiSkinningLODController&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSParticleSystem&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSMeshParticleSystem&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSFacingQuadGenerator&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSAlignedQuadGenerator&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSimulator&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSimulatorStep&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSimulatorGeneralStep&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSimulatorForcesStep&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSimulatorCollidersStep&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSimulatorMeshAlignStep&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSimulatorFinalStep&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSBoundUpdater&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSForce&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSDragForce&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSGravityForce&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSBombForce&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSVolumeEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSBoxEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSphereEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSCylinderEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSMeshEmitter&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterFloatCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitParticlesCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSForceCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSForceBoolCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSForceFloatCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSForceActiveCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSGravityStrengthCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterSpeedCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterRadiusCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterDeclinationCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterDeclinationVarCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterPlanarAngleCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterPlanarAngleVarCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterRotAngleCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterRotAngleVarCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterRotSpeedCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterRotSpeedVarCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSEmitterLifeSpanCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSResetOnLoopCtlr&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSCollider&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSPlanarCollider&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSphericalCollider&, const NifInfo & ) = 0;
		virtual inline void visit( NiPSSpawner&, const NifInfo & ) = 0;
		virtual inline void visit( NiEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiKeyBasedEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBoolEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBoolTimelineEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiColorEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiFloatEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiPoint3Evaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiQuaternionEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiTransformEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiConstBoolEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiConstColorEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiConstFloatEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiConstPoint3Evaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiConstQuaternionEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiConstTransformEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineColorEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineCompColorEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineFloatEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineCompFloatEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplinePoint3Evaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineCompPoint3Evaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineTransformEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiBSplineCompTransformEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiLookAtEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiPathEvaluator&, const NifInfo & ) = 0;
		virtual inline void visit( NiSequenceData&, const NifInfo & ) = 0;
		virtual inline void visit( NiShadowGenerator&, const NifInfo & ) = 0;
		virtual inline void visit( NiFurSpringController&, const NifInfo & ) = 0;
		virtual inline void visit( CStreamableAssetData&, const NifInfo & ) = 0;
		virtual inline void visit( bhkCompressedMeshShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkCompressedMeshShapeData&, const NifInfo & ) = 0;
		virtual inline void visit( BSInvMarker&, const NifInfo & ) = 0;
		virtual inline void visit( BSBoneLODExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( BSBehaviorGraphExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( BSLagBoneController&, const NifInfo & ) = 0;
		virtual inline void visit( BSLODTriShape&, const NifInfo & ) = 0;
		virtual inline void visit( BSFurnitureMarkerNode&, const NifInfo & ) = 0;
		virtual inline void visit( BSLeafAnimNode&, const NifInfo & ) = 0;
		virtual inline void visit( BSTreeNode&, const NifInfo & ) = 0;
		virtual inline void visit( BSTriShape&, const NifInfo & ) = 0;
		virtual inline void visit( BSMeshLODTriShape&, const NifInfo & ) = 0;
		virtual inline void visit( BSSubIndexTriShape&, const NifInfo & ) = 0;
		virtual inline void visit( bhkSystem&, const NifInfo & ) = 0;
		virtual inline void visit( bhkNPCollisionObject&, const NifInfo & ) = 0;
		virtual inline void visit( bhkPhysicsSystem&, const NifInfo & ) = 0;
		virtual inline void visit( bhkRagdollSystem&, const NifInfo & ) = 0;
		virtual inline void visit( BSExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( BSClothExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( BSSkin__Instance&, const NifInfo & ) = 0;
		virtual inline void visit( BSSkin__BoneData&, const NifInfo & ) = 0;
		virtual inline void visit( BSPositionData&, const NifInfo & ) = 0;
		virtual inline void visit( BSConnectPoint__Parents&, const NifInfo & ) = 0;
		virtual inline void visit( BSConnectPoint__Children&, const NifInfo & ) = 0;
		virtual inline void visit( BSEyeCenterExtraData&, const NifInfo & ) = 0;
		virtual inline void visit( BSPackedCombinedGeomDataExtra&, const NifInfo & ) = 0;
		virtual inline void visit( BSPackedCombinedSharedGeomDataExtra&, const NifInfo & ) = 0;
		virtual inline void visit( NiLightRadiusController&, const NifInfo & ) = 0;
		virtual inline void visit( BSDynamicTriShape&, const NifInfo & ) = 0;
		virtual inline void visit( BSDistantObjectLargeRefExtraData&, const NifInfo & ) = 0;

	};

	template <typename Delegate>
	class VisitorImpl : public Visitor {
	public:
		virtual inline void visit( Ni3dsAlphaAnimator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( Ni3dsAnimationNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( Ni3dsColorAnimator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( Ni3dsMorphShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( Ni3dsParticleSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( Ni3dsPathController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysCollider& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkRefObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkSerializable& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkWorldObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkPhantom& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkShapePhantom& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkSimpleShapePhantom& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkEntity& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkRigidBody& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkRigidBodyT& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkConstraint& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkLimitedHingeConstraint& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkMalleableConstraint& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkStiffSpringConstraint& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkRagdollConstraint& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkPrismaticConstraint& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkHingeConstraint& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkBallAndSocketConstraint& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkBallSocketConstraintChain& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkTransformShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkSphereRepShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkConvexShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkSphereShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkCapsuleShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkBoxShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkConvexVerticesShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkConvexTransformShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkConvexSweepShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkMultiSphereShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkBvTreeShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkMoppBvTreeShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkShapeCollection& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkListShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkMeshShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkPackedNiTriStripsShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkNiTriStripsShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiKeyBasedInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFloatInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTransformInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPoint3Interpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPathInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBoolInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBoolTimelineInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBlendInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiObjectNET& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiCollisionObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiCollisionData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkNiCollisionObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkCollisionObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkBlendCollisionObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkPCollisionObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkSPCollisionObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiAVObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiDynamicEffect& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLight& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTransparentProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysVolumeEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTimeController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiInterpController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMultiTargetTransformController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiGeomMorpherController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMorphController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMorpherController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSingleInterpController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiKeyframeController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTransformController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysModifierCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitterCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysModifierBoolCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysModifierActiveCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysModifierFloatCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitterDeclinationCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitterDeclinationVarCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitterInitialRadiusCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitterLifeSpanCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitterSpeedCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysGravityStrengthCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFloatInterpController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFlipController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiAlphaController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTextureTransformController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLightDimmerController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBoolInterpController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiVisController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPoint3InterpController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMaterialColorController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLightColorController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiExtraDataController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFloatExtraDataController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFloatsExtraDataController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFloatsExtraDataPoint3Controller& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBoneLODController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSBoneLODController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiGeometry& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTriBasedGeom& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiGeometryData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( AbstractAdditionalGeometryData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTriBasedGeomData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkBlendController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSBound& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSFurnitureMarker& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSParentVelocityModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysArrayEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSWindModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( hkPackedNiTriStripsData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiAlphaProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiAmbientLight& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticlesData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiRotatingParticlesData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiAutoNormalParticlesData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMeshPSysData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBinaryExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBinaryVoxelExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBinaryVoxelData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBlendBoolInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBlendFloatInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBlendPoint3Interpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBlendTransformInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBoolData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBooleanExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineBasisData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineFloatInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineCompFloatInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplinePoint3Interpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineCompPoint3Interpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineTransformInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineCompTransformInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSRotAccumTransfInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiCamera& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiColorData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiColorExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiControllerManager& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSequence& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiControllerSequence& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiAVObjectPalette& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiDefaultAVObjectPalette& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiDirectionalLight& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiDitherProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiRollController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFloatData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFloatExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFloatsExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFogProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiGravity& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiIntegerExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSXFlags& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiIntegersExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSKeyframeController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiKeyframeData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLookAtController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLookAtInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMaterialProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMorphData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBone& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( AvoidNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( FxWidget& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( FxButton& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( FxRadioButton& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBillboardNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSAnimationNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSParticleNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSwitchNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLODNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPalette& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleBomb& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleColorModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleGrowFade& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleMeshModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleRotation& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticles& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiAutoNormalParticles& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleMeshes& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleMeshesData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMeshParticleSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiParticleSystemController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSPArrayController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPathController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPixelFormat& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPersistentSrcTextureRendererData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPixelData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPlanarCollider& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPointLight& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPosData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiRotData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysAgeDeathModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysBombModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysBoundUpdateModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysBoxEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysColliderManager& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysColorModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysCylinderEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysDragModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitterCtlrData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysGravityModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysGrowFadeModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysMeshEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysMeshUpdateModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysInheritVelocityModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysHavokUpdateModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysRecycleBoundModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysSubTexModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysPlanarCollider& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysSphericalCollider& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysPositionModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysResetOnLoopCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysRotationModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysSpawnModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysSphereEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysUpdateCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysFieldModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysVortexFieldModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysGravityFieldModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysDragFieldModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysTurbulenceFieldModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysLODModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysScaleModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysFieldMagnitudeCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysFieldAttenuationCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysFieldMaxDistanceCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysAirFieldAirFrictionCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysAirFieldInheritVelocityCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysAirFieldSpreadCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysInitialRotSpeedCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysInitialRotSpeedVarCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysInitialRotAngleCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysInitialRotAngleVarCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitterPlanarAngleCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysEmitterPlanarAngleVarCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysAirFieldModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysTrailEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLightIntensityController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSysRadialFieldModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLODData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiRangeLODData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiScreenLODData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiRotatingParticles& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSequenceStreamHelper& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiShadeProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSkinData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSkinInstance& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTriShapeSkinController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiClodSkinInstance& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSkinPartition& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTexture& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSourceTexture& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSpecularProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSphericalCollider& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSpotLight& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiStencilProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiStringExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiStringPalette& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiStringsExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTextKeyExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTextureEffect& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTextureModeProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiImage& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTextureProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTexturingProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMultiTextureProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTransformData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTriShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTriShapeData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTriStrips& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTriStripsData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiEnvMappedTriShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiEnvMappedTriShapeData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBezierTriangle4& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBezierMesh& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiClod& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiClodData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiUVController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiUVData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiVectorExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiVertexColorProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiVertWeightsExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiVisData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiWireframeProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiZBufferProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( RootCollisionNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiRawImageData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiAccumulator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSortAdjustNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSourceCubeMap& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXProp& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXPropDesc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXActorDesc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXBodyDesc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXJointDesc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXD6JointDesc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXShapeDesc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXMeshDesc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXMaterialDesc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXDest& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXRigidBodyDest& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXTransformDest& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXSrc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXRigidBodySrc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXKinematicSrc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPhysXDynamicSrc& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLines& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLinesData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiScreenElementsData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiScreenElements& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiRoomGroup& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiRoom& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPortal& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSFadeNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSShaderLightingProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSShaderNoLightingProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSShaderPPLightingProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSEffectShaderPropertyFloatController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSEffectShaderPropertyColorController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSLightingShaderPropertyFloatController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSLightingShaderPropertyColorController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSNiAlphaPropertyTestRefController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSProceduralLightningController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSShaderTextureSet& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( WaterShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( SkyShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( TileShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( DistantLODShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSDistantTreeShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( TallGrassShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( VolumetricFogShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( HairShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( Lighting30ShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSLightingShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSEffectShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSWaterShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSSkyShaderProperty& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSDismemberSkinInstance& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSDecalPlacementVectorExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysSimpleColorModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSValueNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSStripParticleSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSStripPSysData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysStripUpdateModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSMaterialEmittanceMultController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSMasterParticleSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPSysMultiTargetEmitterCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSRefractionStrengthController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSOrderedNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSRangeNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSBlastNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSDamageStage& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSRefractionFirePeriodController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkConvexListShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSTreadTransfInterpolator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSAnimNote& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSAnimNotes& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkLiquidAction& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSMultiBoundNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSMultiBound& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSMultiBoundData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSMultiBoundOBB& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSMultiBoundSphere& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSSegmentedTriShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSMultiBoundAABB& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiAdditionalGeometryData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPackedAdditionalGeometryData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSWArray& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkAabbPhantom& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSFrustumFOVController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSDebrisNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkBreakableConstraint& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkOrientHingedBodyAction& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkPoseArray& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkRagdollTemplate& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkRagdollTemplateData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiDataStream& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiRenderObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMeshModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMesh& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMorphWeightsController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMorphMeshModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSkinningMeshModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiMeshHWInstance& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiInstancingMeshModifier& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSkinningLODController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSParticleSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSMeshParticleSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSFacingQuadGenerator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSAlignedQuadGenerator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSimulator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSimulatorStep& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSimulatorGeneralStep& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSimulatorForcesStep& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSimulatorCollidersStep& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSimulatorMeshAlignStep& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSimulatorFinalStep& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSBoundUpdater& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSForce& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSDragForce& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSGravityForce& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSBombForce& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSVolumeEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSBoxEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSphereEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSCylinderEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSMeshEmitter& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterFloatCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitParticlesCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSForceCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSForceBoolCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSForceFloatCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSForceActiveCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSGravityStrengthCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterSpeedCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterRadiusCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterDeclinationCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterDeclinationVarCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterPlanarAngleCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterPlanarAngleVarCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterRotAngleCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterRotAngleVarCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterRotSpeedCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterRotSpeedVarCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSEmitterLifeSpanCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSResetOnLoopCtlr& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSCollider& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSPlanarCollider& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSphericalCollider& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPSSpawner& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiKeyBasedEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBoolEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBoolTimelineEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiColorEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFloatEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPoint3Evaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiQuaternionEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiTransformEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiConstBoolEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiConstColorEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiConstFloatEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiConstPoint3Evaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiConstQuaternionEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiConstTransformEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineColorEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineCompColorEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineFloatEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineCompFloatEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplinePoint3Evaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineCompPoint3Evaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineTransformEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiBSplineCompTransformEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLookAtEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiPathEvaluator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiSequenceData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiShadowGenerator& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiFurSpringController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( CStreamableAssetData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkCompressedMeshShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkCompressedMeshShapeData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSInvMarker& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSBoneLODExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSBehaviorGraphExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSLagBoneController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSLODTriShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSFurnitureMarkerNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSLeafAnimNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSTreeNode& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSTriShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSMeshLODTriShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSSubIndexTriShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkNPCollisionObject& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkPhysicsSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( bhkRagdollSystem& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSClothExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSSkin__Instance& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSSkin__BoneData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPositionData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSConnectPoint__Parents& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSConnectPoint__Children& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSEyeCenterExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPackedCombinedGeomDataExtra& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSPackedCombinedSharedGeomDataExtra& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( NiLightRadiusController& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSDynamicTriShape& in, const NifInfo & info) { delegate.visit(in, info);}
		virtual inline void visit( BSDistantObjectLargeRefExtraData& in, const NifInfo & info) { delegate.visit(in, info);}
	protected:
		Delegate& delegate;
	public:
		VisitorImpl(Delegate& impl) : delegate(impl) {}
	};
}
#endif
