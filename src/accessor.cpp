#ifndef __ACCESSOR_T_
#define __ACCESSOR_T_

#include <visitor.h>
#include <NIF_IO.h>

#include <obj/NiObject.h>
#include <obj/Ni3dsAlphaAnimator.h>
#include <obj/Ni3dsAnimationNode.h>
#include <obj/Ni3dsColorAnimator.h>
#include <obj/Ni3dsMorphShape.h>
#include <obj/Ni3dsParticleSystem.h>
#include <obj/Ni3dsPathController.h>
#include <obj/NiParticleModifier.h>
#include <obj/NiPSysCollider.h>
#include <obj/bhkRefObject.h>
#include <obj/bhkSerializable.h>
#include <obj/bhkWorldObject.h>
#include <obj/bhkPhantom.h>
#include <obj/bhkShapePhantom.h>
#include <obj/bhkSimpleShapePhantom.h>
#include <obj/bhkEntity.h>
#include <obj/bhkRigidBody.h>
#include <obj/bhkRigidBodyT.h>
#include <obj/bhkConstraint.h>
#include <obj/bhkLimitedHingeConstraint.h>
#include <obj/bhkMalleableConstraint.h>
#include <obj/bhkStiffSpringConstraint.h>
#include <obj/bhkRagdollConstraint.h>
#include <obj/bhkPrismaticConstraint.h>
#include <obj/bhkHingeConstraint.h>
#include <obj/bhkBallAndSocketConstraint.h>
#include <obj/bhkBallSocketConstraintChain.h>
#include <obj/bhkShape.h>
#include <obj/bhkTransformShape.h>
#include <obj/bhkSphereRepShape.h>
#include <obj/bhkConvexShape.h>
#include <obj/bhkSphereShape.h>
#include <obj/bhkCapsuleShape.h>
#include <obj/bhkBoxShape.h>
#include <obj/bhkConvexVerticesShape.h>
#include <obj/bhkConvexTransformShape.h>
#include <obj/bhkMultiSphereShape.h>
#include <obj/bhkBvTreeShape.h>
#include <obj/bhkMoppBvTreeShape.h>
#include <obj/bhkShapeCollection.h>
#include <obj/bhkListShape.h>
#include <obj/bhkMeshShape.h>
#include <obj/bhkPackedNiTriStripsShape.h>
#include <obj/bhkNiTriStripsShape.h>
#include <obj/NiExtraData.h>
#include <obj/NiInterpolator.h>
#include <obj/NiKeyBasedInterpolator.h>
#include <obj/NiFloatInterpolator.h>
#include <obj/NiTransformInterpolator.h>
#include <obj/NiPoint3Interpolator.h>
#include <obj/NiPathInterpolator.h>
#include <obj/NiBoolInterpolator.h>
#include <obj/NiBoolTimelineInterpolator.h>
#include <obj/NiBlendInterpolator.h>
#include <obj/NiBSplineInterpolator.h>
#include <obj/NiObjectNET.h>
#include <obj/NiCollisionObject.h>
#include <obj/NiCollisionData.h>
#include <obj/bhkNiCollisionObject.h>
#include <obj/bhkCollisionObject.h>
#include <obj/bhkBlendCollisionObject.h>
#include <obj/bhkPCollisionObject.h>
#include <obj/bhkSPCollisionObject.h>
#include <obj/NiAVObject.h>
#include <obj/NiDynamicEffect.h>
#include <obj/NiLight.h>
#include <obj/NiProperty.h>
#include <obj/NiTransparentProperty.h>
#include <obj/NiPSysModifier.h>
#include <obj/NiPSysEmitter.h>
#include <obj/NiPSysVolumeEmitter.h>
#include <obj/NiTimeController.h>
#include <obj/NiInterpController.h>
#include <obj/NiMultiTargetTransformController.h>
#include <obj/NiGeomMorpherController.h>
#include <obj/NiMorphController.h>
#include <obj/NiMorpherController.h>
#include <obj/NiSingleInterpController.h>
#include <obj/NiKeyframeController.h>
#include <obj/NiTransformController.h>
#include <obj/NiPSysModifierCtlr.h>
#include <obj/NiPSysEmitterCtlr.h>
#include <obj/NiPSysModifierBoolCtlr.h>
#include <obj/NiPSysModifierActiveCtlr.h>
#include <obj/NiPSysModifierFloatCtlr.h>
#include <obj/NiPSysEmitterDeclinationCtlr.h>
#include <obj/NiPSysEmitterDeclinationVarCtlr.h>
#include <obj/NiPSysEmitterInitialRadiusCtlr.h>
#include <obj/NiPSysEmitterLifeSpanCtlr.h>
#include <obj/NiPSysEmitterSpeedCtlr.h>
#include <obj/NiPSysGravityStrengthCtlr.h>
#include <obj/NiFloatInterpController.h>
#include <obj/NiFlipController.h>
#include <obj/NiAlphaController.h>
#include <obj/NiTextureTransformController.h>
#include <obj/NiLightDimmerController.h>
#include <obj/NiBoolInterpController.h>
#include <obj/NiVisController.h>
#include <obj/NiPoint3InterpController.h>
#include <obj/NiMaterialColorController.h>
#include <obj/NiLightColorController.h>
#include <obj/NiExtraDataController.h>
#include <obj/NiFloatExtraDataController.h>
#include <obj/NiFloatsExtraDataController.h>
#include <obj/NiFloatsExtraDataPoint3Controller.h>
#include <obj/NiBoneLODController.h>
#include <obj/NiBSBoneLODController.h>
#include <obj/NiGeometry.h>
#include <obj/NiTriBasedGeom.h>
#include <obj/NiGeometryData.h>
#include <obj/AbstractAdditionalGeometryData.h>
#include <obj/NiTriBasedGeomData.h>
#include <obj/bhkBlendController.h>
#include <obj/BSBound.h>
#include <obj/BSFurnitureMarker.h>
#include <obj/BSParentVelocityModifier.h>
#include <obj/BSPSysArrayEmitter.h>
#include <obj/BSWindModifier.h>
#include <obj/hkPackedNiTriStripsData.h>
#include <obj/NiAlphaProperty.h>
#include <obj/NiAmbientLight.h>
#include <obj/NiParticlesData.h>
#include <obj/NiRotatingParticlesData.h>
#include <obj/NiAutoNormalParticlesData.h>
#include <obj/NiPSysData.h>
#include <obj/NiMeshPSysData.h>
#include <obj/NiBinaryExtraData.h>
#include <obj/NiBinaryVoxelExtraData.h>
#include <obj/NiBinaryVoxelData.h>
#include <obj/NiBlendBoolInterpolator.h>
#include <obj/NiBlendFloatInterpolator.h>
#include <obj/NiBlendPoint3Interpolator.h>
#include <obj/NiBlendTransformInterpolator.h>
#include <obj/NiBoolData.h>
#include <obj/NiBooleanExtraData.h>
#include <obj/NiBSplineBasisData.h>
#include <obj/NiBSplineFloatInterpolator.h>
#include <obj/NiBSplineCompFloatInterpolator.h>
#include <obj/NiBSplinePoint3Interpolator.h>
#include <obj/NiBSplineCompPoint3Interpolator.h>
#include <obj/NiBSplineTransformInterpolator.h>
#include <obj/NiBSplineCompTransformInterpolator.h>
#include <obj/BSRotAccumTransfInterpolator.h>
#include <obj/NiBSplineData.h>
#include <obj/NiCamera.h>
#include <obj/NiColorData.h>
#include <obj/NiColorExtraData.h>
#include <obj/NiControllerManager.h>
#include <obj/NiSequence.h>
#include <obj/NiControllerSequence.h>
#include <obj/NiAVObjectPalette.h>
#include <obj/NiDefaultAVObjectPalette.h>
#include <obj/NiDirectionalLight.h>
#include <obj/NiDitherProperty.h>
#include <obj/NiRollController.h>
#include <obj/NiFloatData.h>
#include <obj/NiFloatExtraData.h>
#include <obj/NiFloatsExtraData.h>
#include <obj/NiFogProperty.h>
#include <obj/NiGravity.h>
#include <obj/NiIntegerExtraData.h>
#include <obj/BSXFlags.h>
#include <obj/NiIntegersExtraData.h>
#include <obj/BSKeyframeController.h>
#include <obj/NiKeyframeData.h>
#include <obj/NiLookAtController.h>
#include <obj/NiLookAtInterpolator.h>
#include <obj/NiMaterialProperty.h>
#include <obj/NiMorphData.h>
#include <obj/NiNode.h>
#include <obj/NiBone.h>
#include <obj/AvoidNode.h>
#include <obj/FxWidget.h>
#include <obj/FxButton.h>
#include <obj/FxRadioButton.h>
#include <obj/NiBillboardNode.h>
#include <obj/NiBSAnimationNode.h>
#include <obj/NiBSParticleNode.h>
#include <obj/NiSwitchNode.h>
#include <obj/NiLODNode.h>
#include <obj/NiPalette.h>
#include <obj/NiParticleBomb.h>
#include <obj/NiParticleColorModifier.h>
#include <obj/NiParticleGrowFade.h>
#include <obj/NiParticleMeshModifier.h>
#include <obj/NiParticleRotation.h>
#include <obj/NiParticles.h>
#include <obj/NiAutoNormalParticles.h>
#include <obj/NiParticleMeshes.h>
#include <obj/NiParticleMeshesData.h>
#include <obj/NiParticleSystem.h>
#include <obj/NiMeshParticleSystem.h>
#include <obj/NiParticleSystemController.h>
#include <obj/NiBSPArrayController.h>
#include <obj/NiPathController.h>
#include <obj/NiPixelFormat.h>
#include <obj/NiPersistentSrcTextureRendererData.h>
#include <obj/NiPixelData.h>
#include <obj/NiPlanarCollider.h>
#include <obj/NiPointLight.h>
#include <obj/NiPosData.h>
#include <obj/NiPSysAgeDeathModifier.h>
#include <obj/NiPSysBombModifier.h>
#include <obj/NiPSysBoundUpdateModifier.h>
#include <obj/NiPSysBoxEmitter.h>
#include <obj/NiPSysColliderManager.h>
#include <obj/NiPSysColorModifier.h>
#include <obj/NiPSysCylinderEmitter.h>
#include <obj/NiPSysDragModifier.h>
#include <obj/NiPSysEmitterCtlrData.h>
#include <obj/NiPSysGravityModifier.h>
#include <obj/NiPSysGrowFadeModifier.h>
#include <obj/NiPSysMeshEmitter.h>
#include <obj/NiPSysMeshUpdateModifier.h>
#include <obj/BSPSysInheritVelocityModifier.h>
#include <obj/BSPSysHavokUpdateModifier.h>
#include <obj/BSPSysRecycleBoundModifier.h>
#include <obj/BSPSysSubTexModifier.h>
#include <obj/NiPSysPlanarCollider.h>
#include <obj/NiPSysSphericalCollider.h>
#include <obj/NiPSysPositionModifier.h>
#include <obj/NiPSysResetOnLoopCtlr.h>
#include <obj/NiPSysRotationModifier.h>
#include <obj/NiPSysSpawnModifier.h>
#include <obj/NiPSysSphereEmitter.h>
#include <obj/NiPSysUpdateCtlr.h>
#include <obj/NiPSysFieldModifier.h>
#include <obj/NiPSysVortexFieldModifier.h>
#include <obj/NiPSysGravityFieldModifier.h>
#include <obj/NiPSysDragFieldModifier.h>
#include <obj/NiPSysTurbulenceFieldModifier.h>
#include <obj/BSPSysLODModifier.h>
#include <obj/BSPSysScaleModifier.h>
#include <obj/NiPSysFieldMagnitudeCtlr.h>
#include <obj/NiPSysFieldAttenuationCtlr.h>
#include <obj/NiPSysFieldMaxDistanceCtlr.h>
#include <obj/NiPSysAirFieldAirFrictionCtlr.h>
#include <obj/NiPSysAirFieldInheritVelocityCtlr.h>
#include <obj/NiPSysAirFieldSpreadCtlr.h>
#include <obj/NiPSysInitialRotSpeedCtlr.h>
#include <obj/NiPSysInitialRotSpeedVarCtlr.h>
#include <obj/NiPSysInitialRotAngleCtlr.h>
#include <obj/NiPSysInitialRotAngleVarCtlr.h>
#include <obj/NiPSysEmitterPlanarAngleCtlr.h>
#include <obj/NiPSysEmitterPlanarAngleVarCtlr.h>
#include <obj/NiPSysAirFieldModifier.h>
#include <obj/NiPSysTrailEmitter.h>
#include <obj/NiLightIntensityController.h>
#include <obj/NiPSysRadialFieldModifier.h>
#include <obj/NiLODData.h>
#include <obj/NiRangeLODData.h>
#include <obj/NiScreenLODData.h>
#include <obj/NiRotatingParticles.h>
#include <obj/NiSequenceStreamHelper.h>
#include <obj/NiShadeProperty.h>
#include <obj/NiSkinData.h>
#include <obj/NiSkinInstance.h>
#include <obj/NiTriShapeSkinController.h>
#include <obj/NiClodSkinInstance.h>
#include <obj/NiSkinPartition.h>
#include <obj/NiTexture.h>
#include <obj/NiSourceTexture.h>
#include <obj/NiSpecularProperty.h>
#include <obj/NiSphericalCollider.h>
#include <obj/NiSpotLight.h>
#include <obj/NiStencilProperty.h>
#include <obj/NiStringExtraData.h>
#include <obj/NiStringPalette.h>
#include <obj/NiStringsExtraData.h>
#include <obj/NiTextKeyExtraData.h>
#include <obj/NiTextureEffect.h>
#include <obj/NiTextureModeProperty.h>
#include <obj/NiImage.h>
#include <obj/NiTextureProperty.h>
#include <obj/NiTexturingProperty.h>
#include <obj/NiMultiTextureProperty.h>
#include <obj/NiTransformData.h>
#include <obj/NiTriShape.h>
#include <obj/NiTriShapeData.h>
#include <obj/NiTriStrips.h>
#include <obj/NiTriStripsData.h>
#include <obj/NiEnvMappedTriShape.h>
#include <obj/NiEnvMappedTriShapeData.h>
#include <obj/NiBezierTriangle4.h>
#include <obj/NiBezierMesh.h>
#include <obj/NiClod.h>
#include <obj/NiClodData.h>
#include <obj/NiUVController.h>
#include <obj/NiUVData.h>
#include <obj/NiVectorExtraData.h>
#include <obj/NiVertexColorProperty.h>
#include <obj/NiVertWeightsExtraData.h>
#include <obj/NiVisData.h>
#include <obj/NiWireframeProperty.h>
#include <obj/NiZBufferProperty.h>
#include <obj/RootCollisionNode.h>
#include <obj/NiRawImageData.h>
#include <obj/NiAccumulator.h>
#include <obj/NiSortAdjustNode.h>
#include <obj/NiSourceCubeMap.h>
#include <obj/NiPhysXProp.h>
#include <obj/NiPhysXPropDesc.h>
#include <obj/NiPhysXActorDesc.h>
#include <obj/NiPhysXBodyDesc.h>
#include <obj/NiPhysXJointDesc.h>
#include <obj/NiPhysXD6JointDesc.h>
#include <obj/NiPhysXShapeDesc.h>
#include <obj/NiPhysXMeshDesc.h>
#include <obj/NiPhysXMaterialDesc.h>
#include <obj/NiPhysXDest.h>
#include <obj/NiPhysXRigidBodyDest.h>
#include <obj/NiPhysXTransformDest.h>
#include <obj/NiPhysXSrc.h>
#include <obj/NiPhysXRigidBodySrc.h>
#include <obj/NiPhysXKinematicSrc.h>
#include <obj/NiPhysXDynamicSrc.h>
#include <obj/NiArkAnimationExtraData.h>
#include <obj/NiArkImporterExtraData.h>
#include <obj/NiArkTextureExtraData.h>
#include <obj/NiArkViewportInfoExtraData.h>
#include <obj/NiArkShaderExtraData.h>
#include <obj/NiLines.h>
#include <obj/NiLinesData.h>
#include <obj/NiScreenElementsData.h>
#include <obj/NiScreenElements.h>
#include <obj/NiRoomGroup.h>
#include <obj/NiRoom.h>
#include <obj/NiPortal.h>
#include <obj/BSFadeNode.h>
#include <obj/BSShaderProperty.h>
#include <obj/BSShaderLightingProperty.h>
#include <obj/BSShaderNoLightingProperty.h>
#include <obj/BSShaderPPLightingProperty.h>
#include <obj/BSEffectShaderPropertyFloatController.h>
#include <obj/BSEffectShaderPropertyColorController.h>
#include <obj/BSLightingShaderPropertyFloatController.h>
#include <obj/BSLightingShaderPropertyColorController.h>
#include <obj/BSNiAlphaPropertyTestRefController.h>
#include <obj/BSProceduralLightningController.h>
#include <obj/BSShaderTextureSet.h>
#include <obj/WaterShaderProperty.h>
#include <obj/SkyShaderProperty.h>
#include <obj/TileShaderProperty.h>
#include <obj/DistantLODShaderProperty.h>
#include <obj/BSDistantTreeShaderProperty.h>
#include <obj/TallGrassShaderProperty.h>
#include <obj/VolumetricFogShaderProperty.h>
#include <obj/HairShaderProperty.h>
#include <obj/Lighting30ShaderProperty.h>
#include <obj/BSLightingShaderProperty.h>
#include <obj/BSEffectShaderProperty.h>
#include <obj/BSWaterShaderProperty.h>
#include <obj/BSSkyShaderProperty.h>
#include <obj/BSDismemberSkinInstance.h>
#include <obj/BSDecalPlacementVectorExtraData.h>
#include <obj/BSPSysSimpleColorModifier.h>
#include <obj/BSValueNode.h>
#include <obj/BSStripParticleSystem.h>
#include <obj/BSStripPSysData.h>
#include <obj/BSPSysStripUpdateModifier.h>
#include <obj/BSMaterialEmittanceMultController.h>
#include <obj/BSMasterParticleSystem.h>
#include <obj/BSPSysMultiTargetEmitterCtlr.h>
#include <obj/BSRefractionStrengthController.h>
#include <obj/BSOrderedNode.h>
#include <obj/BSRangeNode.h>
#include <obj/BSBlastNode.h>
#include <obj/BSDamageStage.h>
#include <obj/BSRefractionFirePeriodController.h>
#include <obj/bhkConvexListShape.h>
#include <obj/BSTreadTransfInterpolator.h>
#include <obj/BSAnimNote.h>
#include <obj/BSAnimNotes.h>
#include <obj/bhkLiquidAction.h>
#include <obj/BSMultiBoundNode.h>
#include <obj/BSMultiBound.h>
#include <obj/BSMultiBoundData.h>
#include <obj/BSMultiBoundOBB.h>
#include <obj/BSMultiBoundSphere.h>
#include <obj/BSSegmentedTriShape.h>
#include <obj/BSMultiBoundAABB.h>
#include <obj/NiAdditionalGeometryData.h>
#include <obj/BSPackedAdditionalGeometryData.h>
#include <obj/BSWArray.h>
#include <obj/bhkAabbPhantom.h>
#include <obj/BSFrustumFOVController.h>
#include <obj/BSDebrisNode.h>
#include <obj/bhkBreakableConstraint.h>
#include <obj/bhkOrientHingedBodyAction.h>
#include <obj/bhkPoseArray.h>
#include <obj/bhkRagdollTemplate.h>
#include <obj/bhkRagdollTemplateData.h>
#include <obj/NiDataStream.h>
#include <obj/NiRenderObject.h>
#include <obj/NiMeshModifier.h>
#include <obj/NiMesh.h>
#include <obj/NiMorphWeightsController.h>
#include <obj/NiMorphMeshModifier.h>
#include <obj/NiSkinningMeshModifier.h>
#include <obj/NiMeshHWInstance.h>
#include <obj/NiInstancingMeshModifier.h>
#include <obj/NiSkinningLODController.h>
#include <obj/NiPSParticleSystem.h>
#include <obj/NiPSMeshParticleSystem.h>
#include <obj/NiPSFacingQuadGenerator.h>
#include <obj/NiPSAlignedQuadGenerator.h>
#include <obj/NiPSSimulator.h>
#include <obj/NiPSSimulatorStep.h>
#include <obj/NiPSSimulatorGeneralStep.h>
#include <obj/NiPSSimulatorForcesStep.h>
#include <obj/NiPSSimulatorCollidersStep.h>
#include <obj/NiPSSimulatorMeshAlignStep.h>
#include <obj/NiPSSimulatorFinalStep.h>
#include <obj/NiPSBoundUpdater.h>
#include <obj/NiPSForce.h>
#include <obj/NiPSDragForce.h>
#include <obj/NiPSGravityForce.h>
#include <obj/NiPSBombForce.h>
#include <obj/NiPSEmitter.h>
#include <obj/NiPSVolumeEmitter.h>
#include <obj/NiPSBoxEmitter.h>
#include <obj/NiPSSphereEmitter.h>
#include <obj/NiPSCylinderEmitter.h>
#include <obj/NiPSMeshEmitter.h>
#include <obj/NiPSEmitterCtlr.h>
#include <obj/NiPSEmitterFloatCtlr.h>
#include <obj/NiPSEmitParticlesCtlr.h>
#include <obj/NiPSForceCtlr.h>
#include <obj/NiPSForceBoolCtlr.h>
#include <obj/NiPSForceFloatCtlr.h>
#include <obj/NiPSForceActiveCtlr.h>
#include <obj/NiPSGravityStrengthCtlr.h>
#include <obj/NiPSEmitterSpeedCtlr.h>
#include <obj/NiPSEmitterRadiusCtlr.h>
#include <obj/NiPSEmitterDeclinationCtlr.h>
#include <obj/NiPSEmitterDeclinationVarCtlr.h>
#include <obj/NiPSEmitterPlanarAngleCtlr.h>
#include <obj/NiPSEmitterPlanarAngleVarCtlr.h>
#include <obj/NiPSEmitterRotAngleCtlr.h>
#include <obj/NiPSEmitterRotAngleVarCtlr.h>
#include <obj/NiPSEmitterRotSpeedCtlr.h>
#include <obj/NiPSEmitterRotSpeedVarCtlr.h>
#include <obj/NiPSEmitterLifeSpanCtlr.h>
#include <obj/NiPSResetOnLoopCtlr.h>
#include <obj/NiPSCollider.h>
#include <obj/NiPSPlanarCollider.h>
#include <obj/NiPSSphericalCollider.h>
#include <obj/NiPSSpawner.h>
#include <obj/NiSequenceData.h>
#include <obj/NiTransformEvaluator.h>
#include <obj/NiBSplineCompTransformEvaluator.h>
#include <obj/NiShadowGenerator.h>
#include <obj/NiFurSpringController.h>
#include <obj/CStreamableAssetData.h>
#include <obj/bhkCompressedMeshShape.h>
#include <obj/bhkCompressedMeshShapeData.h>
#include <obj/BSInvMarker.h>
#include <obj/BSBoneLODExtraData.h>
#include <obj/BSBehaviorGraphExtraData.h>
#include <obj/BSLagBoneController.h>
#include <obj/BSLODTriShape.h>
#include <obj/BSFurnitureMarkerNode.h>
#include <obj/BSLeafAnimNode.h>
#include <obj/BSTreeNode.h>
#include <obj/BSTriShape.h>
#include <obj/BSMeshLODTriShape.h>
#include <obj/BSSubIndexTriShape.h>
#include <obj/bhkSystem.h>
#include <obj/bhkNPCollisionObject.h>
#include <obj/bhkPhysicsSystem.h>
#include <obj/bhkRagdollSystem.h>
#include <obj/BSExtraData.h>
#include <obj/BSClothExtraData.h>
#include <obj/BSSkin__Instance.h>
#include <obj/BSSkin__BoneData.h>
#include <obj/BSPositionData.h>
#include <obj/BSConnectPoint__Parents.h>
#include <obj/BSConnectPoint__Children.h>
#include <obj/BSEyeCenterExtraData.h>
#include <obj/BSPackedCombinedSharedGeomDataExtra.h>
#include <obj/NiLightRadiusController.h>
#include <obj/BSDynamicTriShape.h>
#include <obj/BSDistantObjectLargeRefExtraData.h>

namespace Niflib {
	template <>
	inline void accepts(NiObject* niobjectref, Visitor& visitor, const NifInfo & info) {
		if (niobjectref->GetInternalType().IsSameType(Ni3dsAlphaAnimator::TYPE)) visitor.visit(*((Ni3dsAlphaAnimator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsAnimationNode::TYPE)) visitor.visit(*((Ni3dsAnimationNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsColorAnimator::TYPE)) visitor.visit(*((Ni3dsColorAnimator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsMorphShape::TYPE)) visitor.visit(*((Ni3dsMorphShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsParticleSystem::TYPE)) visitor.visit(*((Ni3dsParticleSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsPathController::TYPE)) visitor.visit(*((Ni3dsPathController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleModifier::TYPE)) visitor.visit(*((NiParticleModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysCollider::TYPE)) visitor.visit(*((NiPSysCollider*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRefObject::TYPE)) visitor.visit(*((bhkRefObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSerializable::TYPE)) visitor.visit(*((bhkSerializable*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkWorldObject::TYPE)) visitor.visit(*((bhkWorldObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPhantom::TYPE)) visitor.visit(*((bhkPhantom*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkShapePhantom::TYPE)) visitor.visit(*((bhkShapePhantom*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSimpleShapePhantom::TYPE)) visitor.visit(*((bhkSimpleShapePhantom*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkEntity::TYPE)) visitor.visit(*((bhkEntity*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRigidBody::TYPE)) visitor.visit(*((bhkRigidBody*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRigidBodyT::TYPE)) visitor.visit(*((bhkRigidBodyT*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConstraint::TYPE)) visitor.visit(*((bhkConstraint*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkLimitedHingeConstraint::TYPE)) visitor.visit(*((bhkLimitedHingeConstraint*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkMalleableConstraint::TYPE)) visitor.visit(*((bhkMalleableConstraint*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkStiffSpringConstraint::TYPE)) visitor.visit(*((bhkStiffSpringConstraint*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRagdollConstraint::TYPE)) visitor.visit(*((bhkRagdollConstraint*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPrismaticConstraint::TYPE)) visitor.visit(*((bhkPrismaticConstraint*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkHingeConstraint::TYPE)) visitor.visit(*((bhkHingeConstraint*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBallAndSocketConstraint::TYPE)) visitor.visit(*((bhkBallAndSocketConstraint*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBallSocketConstraintChain::TYPE)) visitor.visit(*((bhkBallSocketConstraintChain*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkShape::TYPE)) visitor.visit(*((bhkShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkTransformShape::TYPE)) visitor.visit(*((bhkTransformShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSphereRepShape::TYPE)) visitor.visit(*((bhkSphereRepShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConvexShape::TYPE)) visitor.visit(*((bhkConvexShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSphereShape::TYPE)) visitor.visit(*((bhkSphereShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkCapsuleShape::TYPE)) visitor.visit(*((bhkCapsuleShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBoxShape::TYPE)) visitor.visit(*((bhkBoxShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConvexVerticesShape::TYPE)) visitor.visit(*((bhkConvexVerticesShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConvexTransformShape::TYPE)) visitor.visit(*((bhkConvexTransformShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkMultiSphereShape::TYPE)) visitor.visit(*((bhkMultiSphereShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBvTreeShape::TYPE)) visitor.visit(*((bhkBvTreeShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkMoppBvTreeShape::TYPE)) visitor.visit(*((bhkMoppBvTreeShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkShapeCollection::TYPE)) visitor.visit(*((bhkShapeCollection*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkListShape::TYPE)) visitor.visit(*((bhkListShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkMeshShape::TYPE)) visitor.visit(*((bhkMeshShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPackedNiTriStripsShape::TYPE)) visitor.visit(*((bhkPackedNiTriStripsShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkNiTriStripsShape::TYPE)) visitor.visit(*((bhkNiTriStripsShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiExtraData::TYPE)) visitor.visit(*((NiExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiInterpolator::TYPE)) visitor.visit(*((NiInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiKeyBasedInterpolator::TYPE)) visitor.visit(*((NiKeyBasedInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatInterpolator::TYPE)) visitor.visit(*((NiFloatInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransformInterpolator::TYPE)) visitor.visit(*((NiTransformInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPoint3Interpolator::TYPE)) visitor.visit(*((NiPoint3Interpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPathInterpolator::TYPE)) visitor.visit(*((NiPathInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoolInterpolator::TYPE)) visitor.visit(*((NiBoolInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoolTimelineInterpolator::TYPE)) visitor.visit(*((NiBoolTimelineInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendInterpolator::TYPE)) visitor.visit(*((NiBlendInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineInterpolator::TYPE)) visitor.visit(*((NiBSplineInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiObjectNET::TYPE)) visitor.visit(*((NiObjectNET*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiCollisionObject::TYPE)) visitor.visit(*((NiCollisionObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiCollisionData::TYPE)) visitor.visit(*((NiCollisionData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkNiCollisionObject::TYPE)) visitor.visit(*((bhkNiCollisionObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkCollisionObject::TYPE)) visitor.visit(*((bhkCollisionObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBlendCollisionObject::TYPE)) visitor.visit(*((bhkBlendCollisionObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPCollisionObject::TYPE)) visitor.visit(*((bhkPCollisionObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSPCollisionObject::TYPE)) visitor.visit(*((bhkSPCollisionObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiAVObject::TYPE)) visitor.visit(*((NiAVObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiDynamicEffect::TYPE)) visitor.visit(*((NiDynamicEffect*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLight::TYPE)) visitor.visit(*((NiLight*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiProperty::TYPE)) visitor.visit(*((NiProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransparentProperty::TYPE)) visitor.visit(*((NiTransparentProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifier::TYPE)) visitor.visit(*((NiPSysModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitter::TYPE)) visitor.visit(*((NiPSysEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysVolumeEmitter::TYPE)) visitor.visit(*((NiPSysVolumeEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTimeController::TYPE)) visitor.visit(*((NiTimeController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiInterpController::TYPE)) visitor.visit(*((NiInterpController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMultiTargetTransformController::TYPE)) visitor.visit(*((NiMultiTargetTransformController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiGeomMorpherController::TYPE)) visitor.visit(*((NiGeomMorpherController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorphController::TYPE)) visitor.visit(*((NiMorphController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorpherController::TYPE)) visitor.visit(*((NiMorpherController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSingleInterpController::TYPE)) visitor.visit(*((NiSingleInterpController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiKeyframeController::TYPE)) visitor.visit(*((NiKeyframeController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransformController::TYPE)) visitor.visit(*((NiTransformController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifierCtlr::TYPE)) visitor.visit(*((NiPSysModifierCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterCtlr::TYPE)) visitor.visit(*((NiPSysEmitterCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifierBoolCtlr::TYPE)) visitor.visit(*((NiPSysModifierBoolCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifierActiveCtlr::TYPE)) visitor.visit(*((NiPSysModifierActiveCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifierFloatCtlr::TYPE)) visitor.visit(*((NiPSysModifierFloatCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterDeclinationCtlr::TYPE)) visitor.visit(*((NiPSysEmitterDeclinationCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterDeclinationVarCtlr::TYPE)) visitor.visit(*((NiPSysEmitterDeclinationVarCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterInitialRadiusCtlr::TYPE)) visitor.visit(*((NiPSysEmitterInitialRadiusCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterLifeSpanCtlr::TYPE)) visitor.visit(*((NiPSysEmitterLifeSpanCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterSpeedCtlr::TYPE)) visitor.visit(*((NiPSysEmitterSpeedCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysGravityStrengthCtlr::TYPE)) visitor.visit(*((NiPSysGravityStrengthCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatInterpController::TYPE)) visitor.visit(*((NiFloatInterpController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFlipController::TYPE)) visitor.visit(*((NiFlipController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiAlphaController::TYPE)) visitor.visit(*((NiAlphaController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextureTransformController::TYPE)) visitor.visit(*((NiTextureTransformController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLightDimmerController::TYPE)) visitor.visit(*((NiLightDimmerController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoolInterpController::TYPE)) visitor.visit(*((NiBoolInterpController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiVisController::TYPE)) visitor.visit(*((NiVisController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPoint3InterpController::TYPE)) visitor.visit(*((NiPoint3InterpController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMaterialColorController::TYPE)) visitor.visit(*((NiMaterialColorController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLightColorController::TYPE)) visitor.visit(*((NiLightColorController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiExtraDataController::TYPE)) visitor.visit(*((NiExtraDataController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatExtraDataController::TYPE)) visitor.visit(*((NiFloatExtraDataController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatsExtraDataController::TYPE)) visitor.visit(*((NiFloatsExtraDataController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatsExtraDataPoint3Controller::TYPE)) visitor.visit(*((NiFloatsExtraDataPoint3Controller*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoneLODController::TYPE)) visitor.visit(*((NiBoneLODController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSBoneLODController::TYPE)) visitor.visit(*((NiBSBoneLODController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiGeometry::TYPE)) visitor.visit(*((NiGeometry*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriBasedGeom::TYPE)) visitor.visit(*((NiTriBasedGeom*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiGeometryData::TYPE)) visitor.visit(*((NiGeometryData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(AbstractAdditionalGeometryData::TYPE)) visitor.visit(*((AbstractAdditionalGeometryData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriBasedGeomData::TYPE)) visitor.visit(*((NiTriBasedGeomData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBlendController::TYPE)) visitor.visit(*((bhkBlendController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSBound::TYPE)) visitor.visit(*((BSBound*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSFurnitureMarker::TYPE)) visitor.visit(*((BSFurnitureMarker*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSParentVelocityModifier::TYPE)) visitor.visit(*((BSParentVelocityModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysArrayEmitter::TYPE)) visitor.visit(*((BSPSysArrayEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSWindModifier::TYPE)) visitor.visit(*((BSWindModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(hkPackedNiTriStripsData::TYPE)) visitor.visit(*((hkPackedNiTriStripsData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiAlphaProperty::TYPE)) visitor.visit(*((NiAlphaProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiAmbientLight::TYPE)) visitor.visit(*((NiAmbientLight*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticlesData::TYPE)) visitor.visit(*((NiParticlesData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiRotatingParticlesData::TYPE)) visitor.visit(*((NiRotatingParticlesData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiAutoNormalParticlesData::TYPE)) visitor.visit(*((NiAutoNormalParticlesData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysData::TYPE)) visitor.visit(*((NiPSysData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMeshPSysData::TYPE)) visitor.visit(*((NiMeshPSysData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBinaryExtraData::TYPE)) visitor.visit(*((NiBinaryExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBinaryVoxelExtraData::TYPE)) visitor.visit(*((NiBinaryVoxelExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBinaryVoxelData::TYPE)) visitor.visit(*((NiBinaryVoxelData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendBoolInterpolator::TYPE)) visitor.visit(*((NiBlendBoolInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendFloatInterpolator::TYPE)) visitor.visit(*((NiBlendFloatInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendPoint3Interpolator::TYPE)) visitor.visit(*((NiBlendPoint3Interpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendTransformInterpolator::TYPE)) visitor.visit(*((NiBlendTransformInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoolData::TYPE)) visitor.visit(*((NiBoolData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBooleanExtraData::TYPE)) visitor.visit(*((NiBooleanExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineBasisData::TYPE)) visitor.visit(*((NiBSplineBasisData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineFloatInterpolator::TYPE)) visitor.visit(*((NiBSplineFloatInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineCompFloatInterpolator::TYPE)) visitor.visit(*((NiBSplineCompFloatInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplinePoint3Interpolator::TYPE)) visitor.visit(*((NiBSplinePoint3Interpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineCompPoint3Interpolator::TYPE)) visitor.visit(*((NiBSplineCompPoint3Interpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineTransformInterpolator::TYPE)) visitor.visit(*((NiBSplineTransformInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineCompTransformInterpolator::TYPE)) visitor.visit(*((NiBSplineCompTransformInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSRotAccumTransfInterpolator::TYPE)) visitor.visit(*((BSRotAccumTransfInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineData::TYPE)) visitor.visit(*((NiBSplineData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiCamera::TYPE)) visitor.visit(*((NiCamera*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiColorData::TYPE)) visitor.visit(*((NiColorData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiColorExtraData::TYPE)) visitor.visit(*((NiColorExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiControllerManager::TYPE)) visitor.visit(*((NiControllerManager*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSequence::TYPE)) visitor.visit(*((NiSequence*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiControllerSequence::TYPE)) visitor.visit(*((NiControllerSequence*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiAVObjectPalette::TYPE)) visitor.visit(*((NiAVObjectPalette*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiDefaultAVObjectPalette::TYPE)) visitor.visit(*((NiDefaultAVObjectPalette*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiDirectionalLight::TYPE)) visitor.visit(*((NiDirectionalLight*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiDitherProperty::TYPE)) visitor.visit(*((NiDitherProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiRollController::TYPE)) visitor.visit(*((NiRollController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatData::TYPE)) visitor.visit(*((NiFloatData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatExtraData::TYPE)) visitor.visit(*((NiFloatExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatsExtraData::TYPE)) visitor.visit(*((NiFloatsExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFogProperty::TYPE)) visitor.visit(*((NiFogProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiGravity::TYPE)) visitor.visit(*((NiGravity*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiIntegerExtraData::TYPE)) visitor.visit(*((NiIntegerExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSXFlags::TYPE)) visitor.visit(*((BSXFlags*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiIntegersExtraData::TYPE)) visitor.visit(*((NiIntegersExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSKeyframeController::TYPE)) visitor.visit(*((BSKeyframeController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiKeyframeData::TYPE)) visitor.visit(*((NiKeyframeData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLookAtController::TYPE)) visitor.visit(*((NiLookAtController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLookAtInterpolator::TYPE)) visitor.visit(*((NiLookAtInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMaterialProperty::TYPE)) visitor.visit(*((NiMaterialProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorphData::TYPE)) visitor.visit(*((NiMorphData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiNode::TYPE)) visitor.visit(*((NiNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBone::TYPE)) visitor.visit(*((NiBone*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(AvoidNode::TYPE)) visitor.visit(*((AvoidNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(FxWidget::TYPE)) visitor.visit(*((FxWidget*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(FxButton::TYPE)) visitor.visit(*((FxButton*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(FxRadioButton::TYPE)) visitor.visit(*((FxRadioButton*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBillboardNode::TYPE)) visitor.visit(*((NiBillboardNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSAnimationNode::TYPE)) visitor.visit(*((NiBSAnimationNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSParticleNode::TYPE)) visitor.visit(*((NiBSParticleNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSwitchNode::TYPE)) visitor.visit(*((NiSwitchNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLODNode::TYPE)) visitor.visit(*((NiLODNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPalette::TYPE)) visitor.visit(*((NiPalette*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleBomb::TYPE)) visitor.visit(*((NiParticleBomb*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleColorModifier::TYPE)) visitor.visit(*((NiParticleColorModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleGrowFade::TYPE)) visitor.visit(*((NiParticleGrowFade*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleMeshModifier::TYPE)) visitor.visit(*((NiParticleMeshModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleRotation::TYPE)) visitor.visit(*((NiParticleRotation*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticles::TYPE)) visitor.visit(*((NiParticles*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiAutoNormalParticles::TYPE)) visitor.visit(*((NiAutoNormalParticles*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleMeshes::TYPE)) visitor.visit(*((NiParticleMeshes*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleMeshesData::TYPE)) visitor.visit(*((NiParticleMeshesData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleSystem::TYPE)) visitor.visit(*((NiParticleSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMeshParticleSystem::TYPE)) visitor.visit(*((NiMeshParticleSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleSystemController::TYPE)) visitor.visit(*((NiParticleSystemController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSPArrayController::TYPE)) visitor.visit(*((NiBSPArrayController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPathController::TYPE)) visitor.visit(*((NiPathController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPixelFormat::TYPE)) visitor.visit(*((NiPixelFormat*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPersistentSrcTextureRendererData::TYPE)) visitor.visit(*((NiPersistentSrcTextureRendererData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPixelData::TYPE)) visitor.visit(*((NiPixelData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPlanarCollider::TYPE)) visitor.visit(*((NiPlanarCollider*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPointLight::TYPE)) visitor.visit(*((NiPointLight*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPosData::TYPE)) visitor.visit(*((NiPosData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAgeDeathModifier::TYPE)) visitor.visit(*((NiPSysAgeDeathModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysBombModifier::TYPE)) visitor.visit(*((NiPSysBombModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysBoundUpdateModifier::TYPE)) visitor.visit(*((NiPSysBoundUpdateModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysBoxEmitter::TYPE)) visitor.visit(*((NiPSysBoxEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysColliderManager::TYPE)) visitor.visit(*((NiPSysColliderManager*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysColorModifier::TYPE)) visitor.visit(*((NiPSysColorModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysCylinderEmitter::TYPE)) visitor.visit(*((NiPSysCylinderEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysDragModifier::TYPE)) visitor.visit(*((NiPSysDragModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterCtlrData::TYPE)) visitor.visit(*((NiPSysEmitterCtlrData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysGravityModifier::TYPE)) visitor.visit(*((NiPSysGravityModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysGrowFadeModifier::TYPE)) visitor.visit(*((NiPSysGrowFadeModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysMeshEmitter::TYPE)) visitor.visit(*((NiPSysMeshEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysMeshUpdateModifier::TYPE)) visitor.visit(*((NiPSysMeshUpdateModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysInheritVelocityModifier::TYPE)) visitor.visit(*((BSPSysInheritVelocityModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysHavokUpdateModifier::TYPE)) visitor.visit(*((BSPSysHavokUpdateModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysRecycleBoundModifier::TYPE)) visitor.visit(*((BSPSysRecycleBoundModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysSubTexModifier::TYPE)) visitor.visit(*((BSPSysSubTexModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysPlanarCollider::TYPE)) visitor.visit(*((NiPSysPlanarCollider*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysSphericalCollider::TYPE)) visitor.visit(*((NiPSysSphericalCollider*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysPositionModifier::TYPE)) visitor.visit(*((NiPSysPositionModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysResetOnLoopCtlr::TYPE)) visitor.visit(*((NiPSysResetOnLoopCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysRotationModifier::TYPE)) visitor.visit(*((NiPSysRotationModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysSpawnModifier::TYPE)) visitor.visit(*((NiPSysSpawnModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysSphereEmitter::TYPE)) visitor.visit(*((NiPSysSphereEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysUpdateCtlr::TYPE)) visitor.visit(*((NiPSysUpdateCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysFieldModifier::TYPE)) visitor.visit(*((NiPSysFieldModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysVortexFieldModifier::TYPE)) visitor.visit(*((NiPSysVortexFieldModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysGravityFieldModifier::TYPE)) visitor.visit(*((NiPSysGravityFieldModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysDragFieldModifier::TYPE)) visitor.visit(*((NiPSysDragFieldModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysTurbulenceFieldModifier::TYPE)) visitor.visit(*((NiPSysTurbulenceFieldModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysLODModifier::TYPE)) visitor.visit(*((BSPSysLODModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysScaleModifier::TYPE)) visitor.visit(*((BSPSysScaleModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysFieldMagnitudeCtlr::TYPE)) visitor.visit(*((NiPSysFieldMagnitudeCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysFieldAttenuationCtlr::TYPE)) visitor.visit(*((NiPSysFieldAttenuationCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysFieldMaxDistanceCtlr::TYPE)) visitor.visit(*((NiPSysFieldMaxDistanceCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAirFieldAirFrictionCtlr::TYPE)) visitor.visit(*((NiPSysAirFieldAirFrictionCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAirFieldInheritVelocityCtlr::TYPE)) visitor.visit(*((NiPSysAirFieldInheritVelocityCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAirFieldSpreadCtlr::TYPE)) visitor.visit(*((NiPSysAirFieldSpreadCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysInitialRotSpeedCtlr::TYPE)) visitor.visit(*((NiPSysInitialRotSpeedCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysInitialRotSpeedVarCtlr::TYPE)) visitor.visit(*((NiPSysInitialRotSpeedVarCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysInitialRotAngleCtlr::TYPE)) visitor.visit(*((NiPSysInitialRotAngleCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysInitialRotAngleVarCtlr::TYPE)) visitor.visit(*((NiPSysInitialRotAngleVarCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterPlanarAngleCtlr::TYPE)) visitor.visit(*((NiPSysEmitterPlanarAngleCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterPlanarAngleVarCtlr::TYPE)) visitor.visit(*((NiPSysEmitterPlanarAngleVarCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAirFieldModifier::TYPE)) visitor.visit(*((NiPSysAirFieldModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysTrailEmitter::TYPE)) visitor.visit(*((NiPSysTrailEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLightIntensityController::TYPE)) visitor.visit(*((NiLightIntensityController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysRadialFieldModifier::TYPE)) visitor.visit(*((NiPSysRadialFieldModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLODData::TYPE)) visitor.visit(*((NiLODData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiRangeLODData::TYPE)) visitor.visit(*((NiRangeLODData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiScreenLODData::TYPE)) visitor.visit(*((NiScreenLODData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiRotatingParticles::TYPE)) visitor.visit(*((NiRotatingParticles*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSequenceStreamHelper::TYPE)) visitor.visit(*((NiSequenceStreamHelper*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiShadeProperty::TYPE)) visitor.visit(*((NiShadeProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinData::TYPE)) visitor.visit(*((NiSkinData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinInstance::TYPE)) visitor.visit(*((NiSkinInstance*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriShapeSkinController::TYPE)) visitor.visit(*((NiTriShapeSkinController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiClodSkinInstance::TYPE)) visitor.visit(*((NiClodSkinInstance*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinPartition::TYPE)) visitor.visit(*((NiSkinPartition*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTexture::TYPE)) visitor.visit(*((NiTexture*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSourceTexture::TYPE)) visitor.visit(*((NiSourceTexture*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSpecularProperty::TYPE)) visitor.visit(*((NiSpecularProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSphericalCollider::TYPE)) visitor.visit(*((NiSphericalCollider*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSpotLight::TYPE)) visitor.visit(*((NiSpotLight*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiStencilProperty::TYPE)) visitor.visit(*((NiStencilProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiStringExtraData::TYPE)) visitor.visit(*((NiStringExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiStringPalette::TYPE)) visitor.visit(*((NiStringPalette*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiStringsExtraData::TYPE)) visitor.visit(*((NiStringsExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextKeyExtraData::TYPE)) visitor.visit(*((NiTextKeyExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextureEffect::TYPE)) visitor.visit(*((NiTextureEffect*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextureModeProperty::TYPE)) visitor.visit(*((NiTextureModeProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiImage::TYPE)) visitor.visit(*((NiImage*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextureProperty::TYPE)) visitor.visit(*((NiTextureProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTexturingProperty::TYPE)) visitor.visit(*((NiTexturingProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMultiTextureProperty::TYPE)) visitor.visit(*((NiMultiTextureProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransformData::TYPE)) visitor.visit(*((NiTransformData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriShape::TYPE)) visitor.visit(*((NiTriShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriShapeData::TYPE)) visitor.visit(*((NiTriShapeData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriStrips::TYPE)) visitor.visit(*((NiTriStrips*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriStripsData::TYPE)) visitor.visit(*((NiTriStripsData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiEnvMappedTriShape::TYPE)) visitor.visit(*((NiEnvMappedTriShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiEnvMappedTriShapeData::TYPE)) visitor.visit(*((NiEnvMappedTriShapeData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBezierTriangle4::TYPE)) visitor.visit(*((NiBezierTriangle4*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBezierMesh::TYPE)) visitor.visit(*((NiBezierMesh*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiClod::TYPE)) visitor.visit(*((NiClod*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiClodData::TYPE)) visitor.visit(*((NiClodData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiUVController::TYPE)) visitor.visit(*((NiUVController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiUVData::TYPE)) visitor.visit(*((NiUVData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiVectorExtraData::TYPE)) visitor.visit(*((NiVectorExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiVertexColorProperty::TYPE)) visitor.visit(*((NiVertexColorProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiVertWeightsExtraData::TYPE)) visitor.visit(*((NiVertWeightsExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiVisData::TYPE)) visitor.visit(*((NiVisData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiWireframeProperty::TYPE)) visitor.visit(*((NiWireframeProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiZBufferProperty::TYPE)) visitor.visit(*((NiZBufferProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(RootCollisionNode::TYPE)) visitor.visit(*((RootCollisionNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiRawImageData::TYPE)) visitor.visit(*((NiRawImageData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiAccumulator::TYPE)) visitor.visit(*((NiAccumulator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSortAdjustNode::TYPE)) visitor.visit(*((NiSortAdjustNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSourceCubeMap::TYPE)) visitor.visit(*((NiSourceCubeMap*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXProp::TYPE)) visitor.visit(*((NiPhysXProp*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXPropDesc::TYPE)) visitor.visit(*((NiPhysXPropDesc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXActorDesc::TYPE)) visitor.visit(*((NiPhysXActorDesc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXBodyDesc::TYPE)) visitor.visit(*((NiPhysXBodyDesc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXJointDesc::TYPE)) visitor.visit(*((NiPhysXJointDesc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXD6JointDesc::TYPE)) visitor.visit(*((NiPhysXD6JointDesc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXShapeDesc::TYPE)) visitor.visit(*((NiPhysXShapeDesc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXMeshDesc::TYPE)) visitor.visit(*((NiPhysXMeshDesc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXMaterialDesc::TYPE)) visitor.visit(*((NiPhysXMaterialDesc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXDest::TYPE)) visitor.visit(*((NiPhysXDest*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXRigidBodyDest::TYPE)) visitor.visit(*((NiPhysXRigidBodyDest*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXTransformDest::TYPE)) visitor.visit(*((NiPhysXTransformDest*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXSrc::TYPE)) visitor.visit(*((NiPhysXSrc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXRigidBodySrc::TYPE)) visitor.visit(*((NiPhysXRigidBodySrc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXKinematicSrc::TYPE)) visitor.visit(*((NiPhysXKinematicSrc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXDynamicSrc::TYPE)) visitor.visit(*((NiPhysXDynamicSrc*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkAnimationExtraData::TYPE)) visitor.visit(*((NiArkAnimationExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkImporterExtraData::TYPE)) visitor.visit(*((NiArkImporterExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkTextureExtraData::TYPE)) visitor.visit(*((NiArkTextureExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkViewportInfoExtraData::TYPE)) visitor.visit(*((NiArkViewportInfoExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkShaderExtraData::TYPE)) visitor.visit(*((NiArkShaderExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLines::TYPE)) visitor.visit(*((NiLines*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLinesData::TYPE)) visitor.visit(*((NiLinesData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiScreenElementsData::TYPE)) visitor.visit(*((NiScreenElementsData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiScreenElements::TYPE)) visitor.visit(*((NiScreenElements*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiRoomGroup::TYPE)) visitor.visit(*((NiRoomGroup*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiRoom::TYPE)) visitor.visit(*((NiRoom*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPortal::TYPE)) visitor.visit(*((NiPortal*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSFadeNode::TYPE)) visitor.visit(*((BSFadeNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderProperty::TYPE)) visitor.visit(*((BSShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderLightingProperty::TYPE)) visitor.visit(*((BSShaderLightingProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderNoLightingProperty::TYPE)) visitor.visit(*((BSShaderNoLightingProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderPPLightingProperty::TYPE)) visitor.visit(*((BSShaderPPLightingProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSEffectShaderPropertyFloatController::TYPE)) visitor.visit(*((BSEffectShaderPropertyFloatController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSEffectShaderPropertyColorController::TYPE)) visitor.visit(*((BSEffectShaderPropertyColorController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSLightingShaderPropertyFloatController::TYPE)) visitor.visit(*((BSLightingShaderPropertyFloatController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSLightingShaderPropertyColorController::TYPE)) visitor.visit(*((BSLightingShaderPropertyColorController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSNiAlphaPropertyTestRefController::TYPE)) visitor.visit(*((BSNiAlphaPropertyTestRefController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSProceduralLightningController::TYPE)) visitor.visit(*((BSProceduralLightningController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderTextureSet::TYPE)) visitor.visit(*((BSShaderTextureSet*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(WaterShaderProperty::TYPE)) visitor.visit(*((WaterShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(SkyShaderProperty::TYPE)) visitor.visit(*((SkyShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(TileShaderProperty::TYPE)) visitor.visit(*((TileShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(DistantLODShaderProperty::TYPE)) visitor.visit(*((DistantLODShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSDistantTreeShaderProperty::TYPE)) visitor.visit(*((BSDistantTreeShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(TallGrassShaderProperty::TYPE)) visitor.visit(*((TallGrassShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(VolumetricFogShaderProperty::TYPE)) visitor.visit(*((VolumetricFogShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(HairShaderProperty::TYPE)) visitor.visit(*((HairShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(Lighting30ShaderProperty::TYPE)) visitor.visit(*((Lighting30ShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSLightingShaderProperty::TYPE)) visitor.visit(*((BSLightingShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSEffectShaderProperty::TYPE)) visitor.visit(*((BSEffectShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSWaterShaderProperty::TYPE)) visitor.visit(*((BSWaterShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSSkyShaderProperty::TYPE)) visitor.visit(*((BSSkyShaderProperty*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSDismemberSkinInstance::TYPE)) visitor.visit(*((BSDismemberSkinInstance*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSDecalPlacementVectorExtraData::TYPE)) visitor.visit(*((BSDecalPlacementVectorExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysSimpleColorModifier::TYPE)) visitor.visit(*((BSPSysSimpleColorModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSValueNode::TYPE)) visitor.visit(*((BSValueNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSStripParticleSystem::TYPE)) visitor.visit(*((BSStripParticleSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSStripPSysData::TYPE)) visitor.visit(*((BSStripPSysData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysStripUpdateModifier::TYPE)) visitor.visit(*((BSPSysStripUpdateModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSMaterialEmittanceMultController::TYPE)) visitor.visit(*((BSMaterialEmittanceMultController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSMasterParticleSystem::TYPE)) visitor.visit(*((BSMasterParticleSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysMultiTargetEmitterCtlr::TYPE)) visitor.visit(*((BSPSysMultiTargetEmitterCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSRefractionStrengthController::TYPE)) visitor.visit(*((BSRefractionStrengthController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSOrderedNode::TYPE)) visitor.visit(*((BSOrderedNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSRangeNode::TYPE)) visitor.visit(*((BSRangeNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSBlastNode::TYPE)) visitor.visit(*((BSBlastNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSDamageStage::TYPE)) visitor.visit(*((BSDamageStage*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSRefractionFirePeriodController::TYPE)) visitor.visit(*((BSRefractionFirePeriodController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConvexListShape::TYPE)) visitor.visit(*((bhkConvexListShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSTreadTransfInterpolator::TYPE)) visitor.visit(*((BSTreadTransfInterpolator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSAnimNote::TYPE)) visitor.visit(*((BSAnimNote*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSAnimNotes::TYPE)) visitor.visit(*((BSAnimNotes*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkLiquidAction::TYPE)) visitor.visit(*((bhkLiquidAction*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundNode::TYPE)) visitor.visit(*((BSMultiBoundNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBound::TYPE)) visitor.visit(*((BSMultiBound*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundData::TYPE)) visitor.visit(*((BSMultiBoundData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundOBB::TYPE)) visitor.visit(*((BSMultiBoundOBB*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundSphere::TYPE)) visitor.visit(*((BSMultiBoundSphere*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSSegmentedTriShape::TYPE)) visitor.visit(*((BSSegmentedTriShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundAABB::TYPE)) visitor.visit(*((BSMultiBoundAABB*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiAdditionalGeometryData::TYPE)) visitor.visit(*((NiAdditionalGeometryData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPackedAdditionalGeometryData::TYPE)) visitor.visit(*((BSPackedAdditionalGeometryData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSWArray::TYPE)) visitor.visit(*((BSWArray*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkAabbPhantom::TYPE)) visitor.visit(*((bhkAabbPhantom*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSFrustumFOVController::TYPE)) visitor.visit(*((BSFrustumFOVController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSDebrisNode::TYPE)) visitor.visit(*((BSDebrisNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBreakableConstraint::TYPE)) visitor.visit(*((bhkBreakableConstraint*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkOrientHingedBodyAction::TYPE)) visitor.visit(*((bhkOrientHingedBodyAction*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPoseArray::TYPE)) visitor.visit(*((bhkPoseArray*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRagdollTemplate::TYPE)) visitor.visit(*((bhkRagdollTemplate*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRagdollTemplateData::TYPE)) visitor.visit(*((bhkRagdollTemplateData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiDataStream::TYPE)) visitor.visit(*((NiDataStream*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiRenderObject::TYPE)) visitor.visit(*((NiRenderObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMeshModifier::TYPE)) visitor.visit(*((NiMeshModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMesh::TYPE)) visitor.visit(*((NiMesh*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorphWeightsController::TYPE)) visitor.visit(*((NiMorphWeightsController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorphMeshModifier::TYPE)) visitor.visit(*((NiMorphMeshModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinningMeshModifier::TYPE)) visitor.visit(*((NiSkinningMeshModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiMeshHWInstance::TYPE)) visitor.visit(*((NiMeshHWInstance*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiInstancingMeshModifier::TYPE)) visitor.visit(*((NiInstancingMeshModifier*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinningLODController::TYPE)) visitor.visit(*((NiSkinningLODController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSParticleSystem::TYPE)) visitor.visit(*((NiPSParticleSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSMeshParticleSystem::TYPE)) visitor.visit(*((NiPSMeshParticleSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSFacingQuadGenerator::TYPE)) visitor.visit(*((NiPSFacingQuadGenerator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSAlignedQuadGenerator::TYPE)) visitor.visit(*((NiPSAlignedQuadGenerator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulator::TYPE)) visitor.visit(*((NiPSSimulator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorStep::TYPE)) visitor.visit(*((NiPSSimulatorStep*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorGeneralStep::TYPE)) visitor.visit(*((NiPSSimulatorGeneralStep*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorForcesStep::TYPE)) visitor.visit(*((NiPSSimulatorForcesStep*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorCollidersStep::TYPE)) visitor.visit(*((NiPSSimulatorCollidersStep*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorMeshAlignStep::TYPE)) visitor.visit(*((NiPSSimulatorMeshAlignStep*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorFinalStep::TYPE)) visitor.visit(*((NiPSSimulatorFinalStep*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSBoundUpdater::TYPE)) visitor.visit(*((NiPSBoundUpdater*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForce::TYPE)) visitor.visit(*((NiPSForce*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSDragForce::TYPE)) visitor.visit(*((NiPSDragForce*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSGravityForce::TYPE)) visitor.visit(*((NiPSGravityForce*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSBombForce::TYPE)) visitor.visit(*((NiPSBombForce*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitter::TYPE)) visitor.visit(*((NiPSEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSVolumeEmitter::TYPE)) visitor.visit(*((NiPSVolumeEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSBoxEmitter::TYPE)) visitor.visit(*((NiPSBoxEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSphereEmitter::TYPE)) visitor.visit(*((NiPSSphereEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSCylinderEmitter::TYPE)) visitor.visit(*((NiPSCylinderEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSMeshEmitter::TYPE)) visitor.visit(*((NiPSMeshEmitter*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterCtlr::TYPE)) visitor.visit(*((NiPSEmitterCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterFloatCtlr::TYPE)) visitor.visit(*((NiPSEmitterFloatCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitParticlesCtlr::TYPE)) visitor.visit(*((NiPSEmitParticlesCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForceCtlr::TYPE)) visitor.visit(*((NiPSForceCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForceBoolCtlr::TYPE)) visitor.visit(*((NiPSForceBoolCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForceFloatCtlr::TYPE)) visitor.visit(*((NiPSForceFloatCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForceActiveCtlr::TYPE)) visitor.visit(*((NiPSForceActiveCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSGravityStrengthCtlr::TYPE)) visitor.visit(*((NiPSGravityStrengthCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterSpeedCtlr::TYPE)) visitor.visit(*((NiPSEmitterSpeedCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRadiusCtlr::TYPE)) visitor.visit(*((NiPSEmitterRadiusCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterDeclinationCtlr::TYPE)) visitor.visit(*((NiPSEmitterDeclinationCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterDeclinationVarCtlr::TYPE)) visitor.visit(*((NiPSEmitterDeclinationVarCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterPlanarAngleCtlr::TYPE)) visitor.visit(*((NiPSEmitterPlanarAngleCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterPlanarAngleVarCtlr::TYPE)) visitor.visit(*((NiPSEmitterPlanarAngleVarCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRotAngleCtlr::TYPE)) visitor.visit(*((NiPSEmitterRotAngleCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRotAngleVarCtlr::TYPE)) visitor.visit(*((NiPSEmitterRotAngleVarCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRotSpeedCtlr::TYPE)) visitor.visit(*((NiPSEmitterRotSpeedCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRotSpeedVarCtlr::TYPE)) visitor.visit(*((NiPSEmitterRotSpeedVarCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterLifeSpanCtlr::TYPE)) visitor.visit(*((NiPSEmitterLifeSpanCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSResetOnLoopCtlr::TYPE)) visitor.visit(*((NiPSResetOnLoopCtlr*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSCollider::TYPE)) visitor.visit(*((NiPSCollider*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSPlanarCollider::TYPE)) visitor.visit(*((NiPSPlanarCollider*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSphericalCollider::TYPE)) visitor.visit(*((NiPSSphericalCollider*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSpawner::TYPE)) visitor.visit(*((NiPSSpawner*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiSequenceData::TYPE)) visitor.visit(*((NiSequenceData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransformEvaluator::TYPE)) visitor.visit(*((NiTransformEvaluator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineCompTransformEvaluator::TYPE)) visitor.visit(*((NiBSplineCompTransformEvaluator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiShadowGenerator::TYPE)) visitor.visit(*((NiShadowGenerator*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiFurSpringController::TYPE)) visitor.visit(*((NiFurSpringController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(CStreamableAssetData::TYPE)) visitor.visit(*((CStreamableAssetData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkCompressedMeshShape::TYPE)) visitor.visit(*((bhkCompressedMeshShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkCompressedMeshShapeData::TYPE)) visitor.visit(*((bhkCompressedMeshShapeData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSInvMarker::TYPE)) visitor.visit(*((BSInvMarker*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSBoneLODExtraData::TYPE)) visitor.visit(*((BSBoneLODExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSBehaviorGraphExtraData::TYPE)) visitor.visit(*((BSBehaviorGraphExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSLagBoneController::TYPE)) visitor.visit(*((BSLagBoneController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSLODTriShape::TYPE)) visitor.visit(*((BSLODTriShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSFurnitureMarkerNode::TYPE)) visitor.visit(*((BSFurnitureMarkerNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSLeafAnimNode::TYPE)) visitor.visit(*((BSLeafAnimNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSTreeNode::TYPE)) visitor.visit(*((BSTreeNode*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSTriShape::TYPE)) visitor.visit(*((BSTriShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSMeshLODTriShape::TYPE)) visitor.visit(*((BSMeshLODTriShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSSubIndexTriShape::TYPE)) visitor.visit(*((BSSubIndexTriShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSystem::TYPE)) visitor.visit(*((bhkSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkNPCollisionObject::TYPE)) visitor.visit(*((bhkNPCollisionObject*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPhysicsSystem::TYPE)) visitor.visit(*((bhkPhysicsSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRagdollSystem::TYPE)) visitor.visit(*((bhkRagdollSystem*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSExtraData::TYPE)) visitor.visit(*((BSExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSClothExtraData::TYPE)) visitor.visit(*((BSClothExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSSkin__Instance::TYPE)) visitor.visit(*((BSSkin__Instance*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSSkin__BoneData::TYPE)) visitor.visit(*((BSSkin__BoneData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPositionData::TYPE)) visitor.visit(*((BSPositionData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSConnectPoint__Parents::TYPE)) visitor.visit(*((BSConnectPoint__Parents*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSConnectPoint__Children::TYPE)) visitor.visit(*((BSConnectPoint__Children*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSEyeCenterExtraData::TYPE)) visitor.visit(*((BSEyeCenterExtraData*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSPackedCombinedSharedGeomDataExtra::TYPE)) visitor.visit(*((BSPackedCombinedSharedGeomDataExtra*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(NiLightRadiusController::TYPE)) visitor.visit(*((NiLightRadiusController*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSDynamicTriShape::TYPE)) visitor.visit(*((BSDynamicTriShape*)niobjectref));return;
		if (niobjectref->GetInternalType().IsSameType(BSDistantObjectLargeRefExtraData::TYPE)) visitor.visit(*((BSDistantObjectLargeRefExtraData*)niobjectref));return;
	}
	template <>
	void accepts(Ref<NiObject> niobjectref, Visitor& visitor, const NifInfo & info) {
		if (niobjectref->GetInternalType().IsSameType(Ni3dsAlphaAnimator::TYPE)) visitor.visit(*((Ni3dsAlphaAnimator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsAnimationNode::TYPE)) visitor.visit(*((Ni3dsAnimationNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsColorAnimator::TYPE)) visitor.visit(*((Ni3dsColorAnimator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsMorphShape::TYPE)) visitor.visit(*((Ni3dsMorphShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsParticleSystem::TYPE)) visitor.visit(*((Ni3dsParticleSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(Ni3dsPathController::TYPE)) visitor.visit(*((Ni3dsPathController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleModifier::TYPE)) visitor.visit(*((NiParticleModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysCollider::TYPE)) visitor.visit(*((NiPSysCollider*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRefObject::TYPE)) visitor.visit(*((bhkRefObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSerializable::TYPE)) visitor.visit(*((bhkSerializable*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkWorldObject::TYPE)) visitor.visit(*((bhkWorldObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPhantom::TYPE)) visitor.visit(*((bhkPhantom*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkShapePhantom::TYPE)) visitor.visit(*((bhkShapePhantom*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSimpleShapePhantom::TYPE)) visitor.visit(*((bhkSimpleShapePhantom*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkEntity::TYPE)) visitor.visit(*((bhkEntity*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRigidBody::TYPE)) visitor.visit(*((bhkRigidBody*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRigidBodyT::TYPE)) visitor.visit(*((bhkRigidBodyT*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConstraint::TYPE)) visitor.visit(*((bhkConstraint*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkLimitedHingeConstraint::TYPE)) visitor.visit(*((bhkLimitedHingeConstraint*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkMalleableConstraint::TYPE)) visitor.visit(*((bhkMalleableConstraint*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkStiffSpringConstraint::TYPE)) visitor.visit(*((bhkStiffSpringConstraint*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRagdollConstraint::TYPE)) visitor.visit(*((bhkRagdollConstraint*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPrismaticConstraint::TYPE)) visitor.visit(*((bhkPrismaticConstraint*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkHingeConstraint::TYPE)) visitor.visit(*((bhkHingeConstraint*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBallAndSocketConstraint::TYPE)) visitor.visit(*((bhkBallAndSocketConstraint*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBallSocketConstraintChain::TYPE)) visitor.visit(*((bhkBallSocketConstraintChain*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkShape::TYPE)) visitor.visit(*((bhkShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkTransformShape::TYPE)) visitor.visit(*((bhkTransformShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSphereRepShape::TYPE)) visitor.visit(*((bhkSphereRepShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConvexShape::TYPE)) visitor.visit(*((bhkConvexShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSphereShape::TYPE)) visitor.visit(*((bhkSphereShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkCapsuleShape::TYPE)) visitor.visit(*((bhkCapsuleShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBoxShape::TYPE)) visitor.visit(*((bhkBoxShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConvexVerticesShape::TYPE)) visitor.visit(*((bhkConvexVerticesShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConvexTransformShape::TYPE)) visitor.visit(*((bhkConvexTransformShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkMultiSphereShape::TYPE)) visitor.visit(*((bhkMultiSphereShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBvTreeShape::TYPE)) visitor.visit(*((bhkBvTreeShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkMoppBvTreeShape::TYPE)) visitor.visit(*((bhkMoppBvTreeShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkShapeCollection::TYPE)) visitor.visit(*((bhkShapeCollection*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkListShape::TYPE)) visitor.visit(*((bhkListShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkMeshShape::TYPE)) visitor.visit(*((bhkMeshShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPackedNiTriStripsShape::TYPE)) visitor.visit(*((bhkPackedNiTriStripsShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkNiTriStripsShape::TYPE)) visitor.visit(*((bhkNiTriStripsShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiExtraData::TYPE)) visitor.visit(*((NiExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiInterpolator::TYPE)) visitor.visit(*((NiInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiKeyBasedInterpolator::TYPE)) visitor.visit(*((NiKeyBasedInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatInterpolator::TYPE)) visitor.visit(*((NiFloatInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransformInterpolator::TYPE)) visitor.visit(*((NiTransformInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPoint3Interpolator::TYPE)) visitor.visit(*((NiPoint3Interpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPathInterpolator::TYPE)) visitor.visit(*((NiPathInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoolInterpolator::TYPE)) visitor.visit(*((NiBoolInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoolTimelineInterpolator::TYPE)) visitor.visit(*((NiBoolTimelineInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendInterpolator::TYPE)) visitor.visit(*((NiBlendInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineInterpolator::TYPE)) visitor.visit(*((NiBSplineInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiObjectNET::TYPE)) visitor.visit(*((NiObjectNET*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiCollisionObject::TYPE)) visitor.visit(*((NiCollisionObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiCollisionData::TYPE)) visitor.visit(*((NiCollisionData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkNiCollisionObject::TYPE)) visitor.visit(*((bhkNiCollisionObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkCollisionObject::TYPE)) visitor.visit(*((bhkCollisionObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBlendCollisionObject::TYPE)) visitor.visit(*((bhkBlendCollisionObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPCollisionObject::TYPE)) visitor.visit(*((bhkPCollisionObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSPCollisionObject::TYPE)) visitor.visit(*((bhkSPCollisionObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiAVObject::TYPE)) visitor.visit(*((NiAVObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiDynamicEffect::TYPE)) visitor.visit(*((NiDynamicEffect*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLight::TYPE)) visitor.visit(*((NiLight*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiProperty::TYPE)) visitor.visit(*((NiProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransparentProperty::TYPE)) visitor.visit(*((NiTransparentProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifier::TYPE)) visitor.visit(*((NiPSysModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitter::TYPE)) visitor.visit(*((NiPSysEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysVolumeEmitter::TYPE)) visitor.visit(*((NiPSysVolumeEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTimeController::TYPE)) visitor.visit(*((NiTimeController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiInterpController::TYPE)) visitor.visit(*((NiInterpController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMultiTargetTransformController::TYPE)) visitor.visit(*((NiMultiTargetTransformController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiGeomMorpherController::TYPE)) visitor.visit(*((NiGeomMorpherController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorphController::TYPE)) visitor.visit(*((NiMorphController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorpherController::TYPE)) visitor.visit(*((NiMorpherController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSingleInterpController::TYPE)) visitor.visit(*((NiSingleInterpController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiKeyframeController::TYPE)) visitor.visit(*((NiKeyframeController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransformController::TYPE)) visitor.visit(*((NiTransformController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifierCtlr::TYPE)) visitor.visit(*((NiPSysModifierCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterCtlr::TYPE)) visitor.visit(*((NiPSysEmitterCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifierBoolCtlr::TYPE)) visitor.visit(*((NiPSysModifierBoolCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifierActiveCtlr::TYPE)) visitor.visit(*((NiPSysModifierActiveCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysModifierFloatCtlr::TYPE)) visitor.visit(*((NiPSysModifierFloatCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterDeclinationCtlr::TYPE)) visitor.visit(*((NiPSysEmitterDeclinationCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterDeclinationVarCtlr::TYPE)) visitor.visit(*((NiPSysEmitterDeclinationVarCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterInitialRadiusCtlr::TYPE)) visitor.visit(*((NiPSysEmitterInitialRadiusCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterLifeSpanCtlr::TYPE)) visitor.visit(*((NiPSysEmitterLifeSpanCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterSpeedCtlr::TYPE)) visitor.visit(*((NiPSysEmitterSpeedCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysGravityStrengthCtlr::TYPE)) visitor.visit(*((NiPSysGravityStrengthCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatInterpController::TYPE)) visitor.visit(*((NiFloatInterpController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFlipController::TYPE)) visitor.visit(*((NiFlipController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiAlphaController::TYPE)) visitor.visit(*((NiAlphaController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextureTransformController::TYPE)) visitor.visit(*((NiTextureTransformController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLightDimmerController::TYPE)) visitor.visit(*((NiLightDimmerController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoolInterpController::TYPE)) visitor.visit(*((NiBoolInterpController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiVisController::TYPE)) visitor.visit(*((NiVisController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPoint3InterpController::TYPE)) visitor.visit(*((NiPoint3InterpController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMaterialColorController::TYPE)) visitor.visit(*((NiMaterialColorController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLightColorController::TYPE)) visitor.visit(*((NiLightColorController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiExtraDataController::TYPE)) visitor.visit(*((NiExtraDataController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatExtraDataController::TYPE)) visitor.visit(*((NiFloatExtraDataController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatsExtraDataController::TYPE)) visitor.visit(*((NiFloatsExtraDataController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatsExtraDataPoint3Controller::TYPE)) visitor.visit(*((NiFloatsExtraDataPoint3Controller*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoneLODController::TYPE)) visitor.visit(*((NiBoneLODController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSBoneLODController::TYPE)) visitor.visit(*((NiBSBoneLODController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiGeometry::TYPE)) visitor.visit(*((NiGeometry*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriBasedGeom::TYPE)) visitor.visit(*((NiTriBasedGeom*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiGeometryData::TYPE)) visitor.visit(*((NiGeometryData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(AbstractAdditionalGeometryData::TYPE)) visitor.visit(*((AbstractAdditionalGeometryData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriBasedGeomData::TYPE)) visitor.visit(*((NiTriBasedGeomData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBlendController::TYPE)) visitor.visit(*((bhkBlendController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSBound::TYPE)) visitor.visit(*((BSBound*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSFurnitureMarker::TYPE)) visitor.visit(*((BSFurnitureMarker*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSParentVelocityModifier::TYPE)) visitor.visit(*((BSParentVelocityModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysArrayEmitter::TYPE)) visitor.visit(*((BSPSysArrayEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSWindModifier::TYPE)) visitor.visit(*((BSWindModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(hkPackedNiTriStripsData::TYPE)) visitor.visit(*((hkPackedNiTriStripsData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiAlphaProperty::TYPE)) visitor.visit(*((NiAlphaProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiAmbientLight::TYPE)) visitor.visit(*((NiAmbientLight*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticlesData::TYPE)) visitor.visit(*((NiParticlesData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiRotatingParticlesData::TYPE)) visitor.visit(*((NiRotatingParticlesData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiAutoNormalParticlesData::TYPE)) visitor.visit(*((NiAutoNormalParticlesData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysData::TYPE)) visitor.visit(*((NiPSysData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMeshPSysData::TYPE)) visitor.visit(*((NiMeshPSysData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBinaryExtraData::TYPE)) visitor.visit(*((NiBinaryExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBinaryVoxelExtraData::TYPE)) visitor.visit(*((NiBinaryVoxelExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBinaryVoxelData::TYPE)) visitor.visit(*((NiBinaryVoxelData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendBoolInterpolator::TYPE)) visitor.visit(*((NiBlendBoolInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendFloatInterpolator::TYPE)) visitor.visit(*((NiBlendFloatInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendPoint3Interpolator::TYPE)) visitor.visit(*((NiBlendPoint3Interpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBlendTransformInterpolator::TYPE)) visitor.visit(*((NiBlendTransformInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBoolData::TYPE)) visitor.visit(*((NiBoolData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBooleanExtraData::TYPE)) visitor.visit(*((NiBooleanExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineBasisData::TYPE)) visitor.visit(*((NiBSplineBasisData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineFloatInterpolator::TYPE)) visitor.visit(*((NiBSplineFloatInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineCompFloatInterpolator::TYPE)) visitor.visit(*((NiBSplineCompFloatInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplinePoint3Interpolator::TYPE)) visitor.visit(*((NiBSplinePoint3Interpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineCompPoint3Interpolator::TYPE)) visitor.visit(*((NiBSplineCompPoint3Interpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineTransformInterpolator::TYPE)) visitor.visit(*((NiBSplineTransformInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineCompTransformInterpolator::TYPE)) visitor.visit(*((NiBSplineCompTransformInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSRotAccumTransfInterpolator::TYPE)) visitor.visit(*((BSRotAccumTransfInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineData::TYPE)) visitor.visit(*((NiBSplineData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiCamera::TYPE)) visitor.visit(*((NiCamera*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiColorData::TYPE)) visitor.visit(*((NiColorData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiColorExtraData::TYPE)) visitor.visit(*((NiColorExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiControllerManager::TYPE)) visitor.visit(*((NiControllerManager*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSequence::TYPE)) visitor.visit(*((NiSequence*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiControllerSequence::TYPE)) visitor.visit(*((NiControllerSequence*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiAVObjectPalette::TYPE)) visitor.visit(*((NiAVObjectPalette*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiDefaultAVObjectPalette::TYPE)) visitor.visit(*((NiDefaultAVObjectPalette*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiDirectionalLight::TYPE)) visitor.visit(*((NiDirectionalLight*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiDitherProperty::TYPE)) visitor.visit(*((NiDitherProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiRollController::TYPE)) visitor.visit(*((NiRollController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatData::TYPE)) visitor.visit(*((NiFloatData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatExtraData::TYPE)) visitor.visit(*((NiFloatExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFloatsExtraData::TYPE)) visitor.visit(*((NiFloatsExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFogProperty::TYPE)) visitor.visit(*((NiFogProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiGravity::TYPE)) visitor.visit(*((NiGravity*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiIntegerExtraData::TYPE)) visitor.visit(*((NiIntegerExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSXFlags::TYPE)) visitor.visit(*((BSXFlags*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiIntegersExtraData::TYPE)) visitor.visit(*((NiIntegersExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSKeyframeController::TYPE)) visitor.visit(*((BSKeyframeController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiKeyframeData::TYPE)) visitor.visit(*((NiKeyframeData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLookAtController::TYPE)) visitor.visit(*((NiLookAtController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLookAtInterpolator::TYPE)) visitor.visit(*((NiLookAtInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMaterialProperty::TYPE)) visitor.visit(*((NiMaterialProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorphData::TYPE)) visitor.visit(*((NiMorphData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiNode::TYPE)) visitor.visit(*((NiNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBone::TYPE)) visitor.visit(*((NiBone*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(AvoidNode::TYPE)) visitor.visit(*((AvoidNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(FxWidget::TYPE)) visitor.visit(*((FxWidget*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(FxButton::TYPE)) visitor.visit(*((FxButton*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(FxRadioButton::TYPE)) visitor.visit(*((FxRadioButton*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBillboardNode::TYPE)) visitor.visit(*((NiBillboardNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSAnimationNode::TYPE)) visitor.visit(*((NiBSAnimationNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSParticleNode::TYPE)) visitor.visit(*((NiBSParticleNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSwitchNode::TYPE)) visitor.visit(*((NiSwitchNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLODNode::TYPE)) visitor.visit(*((NiLODNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPalette::TYPE)) visitor.visit(*((NiPalette*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleBomb::TYPE)) visitor.visit(*((NiParticleBomb*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleColorModifier::TYPE)) visitor.visit(*((NiParticleColorModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleGrowFade::TYPE)) visitor.visit(*((NiParticleGrowFade*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleMeshModifier::TYPE)) visitor.visit(*((NiParticleMeshModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleRotation::TYPE)) visitor.visit(*((NiParticleRotation*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticles::TYPE)) visitor.visit(*((NiParticles*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiAutoNormalParticles::TYPE)) visitor.visit(*((NiAutoNormalParticles*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleMeshes::TYPE)) visitor.visit(*((NiParticleMeshes*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleMeshesData::TYPE)) visitor.visit(*((NiParticleMeshesData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleSystem::TYPE)) visitor.visit(*((NiParticleSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMeshParticleSystem::TYPE)) visitor.visit(*((NiMeshParticleSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiParticleSystemController::TYPE)) visitor.visit(*((NiParticleSystemController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSPArrayController::TYPE)) visitor.visit(*((NiBSPArrayController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPathController::TYPE)) visitor.visit(*((NiPathController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPixelFormat::TYPE)) visitor.visit(*((NiPixelFormat*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPersistentSrcTextureRendererData::TYPE)) visitor.visit(*((NiPersistentSrcTextureRendererData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPixelData::TYPE)) visitor.visit(*((NiPixelData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPlanarCollider::TYPE)) visitor.visit(*((NiPlanarCollider*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPointLight::TYPE)) visitor.visit(*((NiPointLight*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPosData::TYPE)) visitor.visit(*((NiPosData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAgeDeathModifier::TYPE)) visitor.visit(*((NiPSysAgeDeathModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysBombModifier::TYPE)) visitor.visit(*((NiPSysBombModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysBoundUpdateModifier::TYPE)) visitor.visit(*((NiPSysBoundUpdateModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysBoxEmitter::TYPE)) visitor.visit(*((NiPSysBoxEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysColliderManager::TYPE)) visitor.visit(*((NiPSysColliderManager*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysColorModifier::TYPE)) visitor.visit(*((NiPSysColorModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysCylinderEmitter::TYPE)) visitor.visit(*((NiPSysCylinderEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysDragModifier::TYPE)) visitor.visit(*((NiPSysDragModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterCtlrData::TYPE)) visitor.visit(*((NiPSysEmitterCtlrData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysGravityModifier::TYPE)) visitor.visit(*((NiPSysGravityModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysGrowFadeModifier::TYPE)) visitor.visit(*((NiPSysGrowFadeModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysMeshEmitter::TYPE)) visitor.visit(*((NiPSysMeshEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysMeshUpdateModifier::TYPE)) visitor.visit(*((NiPSysMeshUpdateModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysInheritVelocityModifier::TYPE)) visitor.visit(*((BSPSysInheritVelocityModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysHavokUpdateModifier::TYPE)) visitor.visit(*((BSPSysHavokUpdateModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysRecycleBoundModifier::TYPE)) visitor.visit(*((BSPSysRecycleBoundModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysSubTexModifier::TYPE)) visitor.visit(*((BSPSysSubTexModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysPlanarCollider::TYPE)) visitor.visit(*((NiPSysPlanarCollider*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysSphericalCollider::TYPE)) visitor.visit(*((NiPSysSphericalCollider*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysPositionModifier::TYPE)) visitor.visit(*((NiPSysPositionModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysResetOnLoopCtlr::TYPE)) visitor.visit(*((NiPSysResetOnLoopCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysRotationModifier::TYPE)) visitor.visit(*((NiPSysRotationModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysSpawnModifier::TYPE)) visitor.visit(*((NiPSysSpawnModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysSphereEmitter::TYPE)) visitor.visit(*((NiPSysSphereEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysUpdateCtlr::TYPE)) visitor.visit(*((NiPSysUpdateCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysFieldModifier::TYPE)) visitor.visit(*((NiPSysFieldModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysVortexFieldModifier::TYPE)) visitor.visit(*((NiPSysVortexFieldModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysGravityFieldModifier::TYPE)) visitor.visit(*((NiPSysGravityFieldModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysDragFieldModifier::TYPE)) visitor.visit(*((NiPSysDragFieldModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysTurbulenceFieldModifier::TYPE)) visitor.visit(*((NiPSysTurbulenceFieldModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysLODModifier::TYPE)) visitor.visit(*((BSPSysLODModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysScaleModifier::TYPE)) visitor.visit(*((BSPSysScaleModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysFieldMagnitudeCtlr::TYPE)) visitor.visit(*((NiPSysFieldMagnitudeCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysFieldAttenuationCtlr::TYPE)) visitor.visit(*((NiPSysFieldAttenuationCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysFieldMaxDistanceCtlr::TYPE)) visitor.visit(*((NiPSysFieldMaxDistanceCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAirFieldAirFrictionCtlr::TYPE)) visitor.visit(*((NiPSysAirFieldAirFrictionCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAirFieldInheritVelocityCtlr::TYPE)) visitor.visit(*((NiPSysAirFieldInheritVelocityCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAirFieldSpreadCtlr::TYPE)) visitor.visit(*((NiPSysAirFieldSpreadCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysInitialRotSpeedCtlr::TYPE)) visitor.visit(*((NiPSysInitialRotSpeedCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysInitialRotSpeedVarCtlr::TYPE)) visitor.visit(*((NiPSysInitialRotSpeedVarCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysInitialRotAngleCtlr::TYPE)) visitor.visit(*((NiPSysInitialRotAngleCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysInitialRotAngleVarCtlr::TYPE)) visitor.visit(*((NiPSysInitialRotAngleVarCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterPlanarAngleCtlr::TYPE)) visitor.visit(*((NiPSysEmitterPlanarAngleCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysEmitterPlanarAngleVarCtlr::TYPE)) visitor.visit(*((NiPSysEmitterPlanarAngleVarCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysAirFieldModifier::TYPE)) visitor.visit(*((NiPSysAirFieldModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysTrailEmitter::TYPE)) visitor.visit(*((NiPSysTrailEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLightIntensityController::TYPE)) visitor.visit(*((NiLightIntensityController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSysRadialFieldModifier::TYPE)) visitor.visit(*((NiPSysRadialFieldModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLODData::TYPE)) visitor.visit(*((NiLODData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiRangeLODData::TYPE)) visitor.visit(*((NiRangeLODData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiScreenLODData::TYPE)) visitor.visit(*((NiScreenLODData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiRotatingParticles::TYPE)) visitor.visit(*((NiRotatingParticles*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSequenceStreamHelper::TYPE)) visitor.visit(*((NiSequenceStreamHelper*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiShadeProperty::TYPE)) visitor.visit(*((NiShadeProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinData::TYPE)) visitor.visit(*((NiSkinData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinInstance::TYPE)) visitor.visit(*((NiSkinInstance*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriShapeSkinController::TYPE)) visitor.visit(*((NiTriShapeSkinController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiClodSkinInstance::TYPE)) visitor.visit(*((NiClodSkinInstance*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinPartition::TYPE)) visitor.visit(*((NiSkinPartition*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTexture::TYPE)) visitor.visit(*((NiTexture*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSourceTexture::TYPE)) visitor.visit(*((NiSourceTexture*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSpecularProperty::TYPE)) visitor.visit(*((NiSpecularProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSphericalCollider::TYPE)) visitor.visit(*((NiSphericalCollider*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSpotLight::TYPE)) visitor.visit(*((NiSpotLight*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiStencilProperty::TYPE)) visitor.visit(*((NiStencilProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiStringExtraData::TYPE)) visitor.visit(*((NiStringExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiStringPalette::TYPE)) visitor.visit(*((NiStringPalette*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiStringsExtraData::TYPE)) visitor.visit(*((NiStringsExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextKeyExtraData::TYPE)) visitor.visit(*((NiTextKeyExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextureEffect::TYPE)) visitor.visit(*((NiTextureEffect*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextureModeProperty::TYPE)) visitor.visit(*((NiTextureModeProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiImage::TYPE)) visitor.visit(*((NiImage*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTextureProperty::TYPE)) visitor.visit(*((NiTextureProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTexturingProperty::TYPE)) visitor.visit(*((NiTexturingProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMultiTextureProperty::TYPE)) visitor.visit(*((NiMultiTextureProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransformData::TYPE)) visitor.visit(*((NiTransformData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriShape::TYPE)) visitor.visit(*((NiTriShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriShapeData::TYPE)) visitor.visit(*((NiTriShapeData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriStrips::TYPE)) visitor.visit(*((NiTriStrips*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTriStripsData::TYPE)) visitor.visit(*((NiTriStripsData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiEnvMappedTriShape::TYPE)) visitor.visit(*((NiEnvMappedTriShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiEnvMappedTriShapeData::TYPE)) visitor.visit(*((NiEnvMappedTriShapeData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBezierTriangle4::TYPE)) visitor.visit(*((NiBezierTriangle4*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBezierMesh::TYPE)) visitor.visit(*((NiBezierMesh*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiClod::TYPE)) visitor.visit(*((NiClod*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiClodData::TYPE)) visitor.visit(*((NiClodData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiUVController::TYPE)) visitor.visit(*((NiUVController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiUVData::TYPE)) visitor.visit(*((NiUVData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiVectorExtraData::TYPE)) visitor.visit(*((NiVectorExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiVertexColorProperty::TYPE)) visitor.visit(*((NiVertexColorProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiVertWeightsExtraData::TYPE)) visitor.visit(*((NiVertWeightsExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiVisData::TYPE)) visitor.visit(*((NiVisData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiWireframeProperty::TYPE)) visitor.visit(*((NiWireframeProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiZBufferProperty::TYPE)) visitor.visit(*((NiZBufferProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(RootCollisionNode::TYPE)) visitor.visit(*((RootCollisionNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiRawImageData::TYPE)) visitor.visit(*((NiRawImageData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiAccumulator::TYPE)) visitor.visit(*((NiAccumulator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSortAdjustNode::TYPE)) visitor.visit(*((NiSortAdjustNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSourceCubeMap::TYPE)) visitor.visit(*((NiSourceCubeMap*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXProp::TYPE)) visitor.visit(*((NiPhysXProp*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXPropDesc::TYPE)) visitor.visit(*((NiPhysXPropDesc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXActorDesc::TYPE)) visitor.visit(*((NiPhysXActorDesc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXBodyDesc::TYPE)) visitor.visit(*((NiPhysXBodyDesc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXJointDesc::TYPE)) visitor.visit(*((NiPhysXJointDesc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXD6JointDesc::TYPE)) visitor.visit(*((NiPhysXD6JointDesc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXShapeDesc::TYPE)) visitor.visit(*((NiPhysXShapeDesc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXMeshDesc::TYPE)) visitor.visit(*((NiPhysXMeshDesc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXMaterialDesc::TYPE)) visitor.visit(*((NiPhysXMaterialDesc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXDest::TYPE)) visitor.visit(*((NiPhysXDest*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXRigidBodyDest::TYPE)) visitor.visit(*((NiPhysXRigidBodyDest*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXTransformDest::TYPE)) visitor.visit(*((NiPhysXTransformDest*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXSrc::TYPE)) visitor.visit(*((NiPhysXSrc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXRigidBodySrc::TYPE)) visitor.visit(*((NiPhysXRigidBodySrc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXKinematicSrc::TYPE)) visitor.visit(*((NiPhysXKinematicSrc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPhysXDynamicSrc::TYPE)) visitor.visit(*((NiPhysXDynamicSrc*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkAnimationExtraData::TYPE)) visitor.visit(*((NiArkAnimationExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkImporterExtraData::TYPE)) visitor.visit(*((NiArkImporterExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkTextureExtraData::TYPE)) visitor.visit(*((NiArkTextureExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkViewportInfoExtraData::TYPE)) visitor.visit(*((NiArkViewportInfoExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiArkShaderExtraData::TYPE)) visitor.visit(*((NiArkShaderExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLines::TYPE)) visitor.visit(*((NiLines*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLinesData::TYPE)) visitor.visit(*((NiLinesData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiScreenElementsData::TYPE)) visitor.visit(*((NiScreenElementsData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiScreenElements::TYPE)) visitor.visit(*((NiScreenElements*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiRoomGroup::TYPE)) visitor.visit(*((NiRoomGroup*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiRoom::TYPE)) visitor.visit(*((NiRoom*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPortal::TYPE)) visitor.visit(*((NiPortal*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSFadeNode::TYPE)) visitor.visit(*((BSFadeNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderProperty::TYPE)) visitor.visit(*((BSShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderLightingProperty::TYPE)) visitor.visit(*((BSShaderLightingProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderNoLightingProperty::TYPE)) visitor.visit(*((BSShaderNoLightingProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderPPLightingProperty::TYPE)) visitor.visit(*((BSShaderPPLightingProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSEffectShaderPropertyFloatController::TYPE)) visitor.visit(*((BSEffectShaderPropertyFloatController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSEffectShaderPropertyColorController::TYPE)) visitor.visit(*((BSEffectShaderPropertyColorController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSLightingShaderPropertyFloatController::TYPE)) visitor.visit(*((BSLightingShaderPropertyFloatController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSLightingShaderPropertyColorController::TYPE)) visitor.visit(*((BSLightingShaderPropertyColorController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSNiAlphaPropertyTestRefController::TYPE)) visitor.visit(*((BSNiAlphaPropertyTestRefController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSProceduralLightningController::TYPE)) visitor.visit(*((BSProceduralLightningController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSShaderTextureSet::TYPE)) visitor.visit(*((BSShaderTextureSet*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(WaterShaderProperty::TYPE)) visitor.visit(*((WaterShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(SkyShaderProperty::TYPE)) visitor.visit(*((SkyShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(TileShaderProperty::TYPE)) visitor.visit(*((TileShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(DistantLODShaderProperty::TYPE)) visitor.visit(*((DistantLODShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSDistantTreeShaderProperty::TYPE)) visitor.visit(*((BSDistantTreeShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(TallGrassShaderProperty::TYPE)) visitor.visit(*((TallGrassShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(VolumetricFogShaderProperty::TYPE)) visitor.visit(*((VolumetricFogShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(HairShaderProperty::TYPE)) visitor.visit(*((HairShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(Lighting30ShaderProperty::TYPE)) visitor.visit(*((Lighting30ShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSLightingShaderProperty::TYPE)) visitor.visit(*((BSLightingShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSEffectShaderProperty::TYPE)) visitor.visit(*((BSEffectShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSWaterShaderProperty::TYPE)) visitor.visit(*((BSWaterShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSSkyShaderProperty::TYPE)) visitor.visit(*((BSSkyShaderProperty*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSDismemberSkinInstance::TYPE)) visitor.visit(*((BSDismemberSkinInstance*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSDecalPlacementVectorExtraData::TYPE)) visitor.visit(*((BSDecalPlacementVectorExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysSimpleColorModifier::TYPE)) visitor.visit(*((BSPSysSimpleColorModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSValueNode::TYPE)) visitor.visit(*((BSValueNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSStripParticleSystem::TYPE)) visitor.visit(*((BSStripParticleSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSStripPSysData::TYPE)) visitor.visit(*((BSStripPSysData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysStripUpdateModifier::TYPE)) visitor.visit(*((BSPSysStripUpdateModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSMaterialEmittanceMultController::TYPE)) visitor.visit(*((BSMaterialEmittanceMultController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSMasterParticleSystem::TYPE)) visitor.visit(*((BSMasterParticleSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPSysMultiTargetEmitterCtlr::TYPE)) visitor.visit(*((BSPSysMultiTargetEmitterCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSRefractionStrengthController::TYPE)) visitor.visit(*((BSRefractionStrengthController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSOrderedNode::TYPE)) visitor.visit(*((BSOrderedNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSRangeNode::TYPE)) visitor.visit(*((BSRangeNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSBlastNode::TYPE)) visitor.visit(*((BSBlastNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSDamageStage::TYPE)) visitor.visit(*((BSDamageStage*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSRefractionFirePeriodController::TYPE)) visitor.visit(*((BSRefractionFirePeriodController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkConvexListShape::TYPE)) visitor.visit(*((bhkConvexListShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSTreadTransfInterpolator::TYPE)) visitor.visit(*((BSTreadTransfInterpolator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSAnimNote::TYPE)) visitor.visit(*((BSAnimNote*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSAnimNotes::TYPE)) visitor.visit(*((BSAnimNotes*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkLiquidAction::TYPE)) visitor.visit(*((bhkLiquidAction*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundNode::TYPE)) visitor.visit(*((BSMultiBoundNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBound::TYPE)) visitor.visit(*((BSMultiBound*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundData::TYPE)) visitor.visit(*((BSMultiBoundData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundOBB::TYPE)) visitor.visit(*((BSMultiBoundOBB*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundSphere::TYPE)) visitor.visit(*((BSMultiBoundSphere*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSSegmentedTriShape::TYPE)) visitor.visit(*((BSSegmentedTriShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSMultiBoundAABB::TYPE)) visitor.visit(*((BSMultiBoundAABB*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiAdditionalGeometryData::TYPE)) visitor.visit(*((NiAdditionalGeometryData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPackedAdditionalGeometryData::TYPE)) visitor.visit(*((BSPackedAdditionalGeometryData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSWArray::TYPE)) visitor.visit(*((BSWArray*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkAabbPhantom::TYPE)) visitor.visit(*((bhkAabbPhantom*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSFrustumFOVController::TYPE)) visitor.visit(*((BSFrustumFOVController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSDebrisNode::TYPE)) visitor.visit(*((BSDebrisNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkBreakableConstraint::TYPE)) visitor.visit(*((bhkBreakableConstraint*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkOrientHingedBodyAction::TYPE)) visitor.visit(*((bhkOrientHingedBodyAction*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPoseArray::TYPE)) visitor.visit(*((bhkPoseArray*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRagdollTemplate::TYPE)) visitor.visit(*((bhkRagdollTemplate*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRagdollTemplateData::TYPE)) visitor.visit(*((bhkRagdollTemplateData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiDataStream::TYPE)) visitor.visit(*((NiDataStream*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiRenderObject::TYPE)) visitor.visit(*((NiRenderObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMeshModifier::TYPE)) visitor.visit(*((NiMeshModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMesh::TYPE)) visitor.visit(*((NiMesh*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorphWeightsController::TYPE)) visitor.visit(*((NiMorphWeightsController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMorphMeshModifier::TYPE)) visitor.visit(*((NiMorphMeshModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinningMeshModifier::TYPE)) visitor.visit(*((NiSkinningMeshModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiMeshHWInstance::TYPE)) visitor.visit(*((NiMeshHWInstance*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiInstancingMeshModifier::TYPE)) visitor.visit(*((NiInstancingMeshModifier*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSkinningLODController::TYPE)) visitor.visit(*((NiSkinningLODController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSParticleSystem::TYPE)) visitor.visit(*((NiPSParticleSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSMeshParticleSystem::TYPE)) visitor.visit(*((NiPSMeshParticleSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSFacingQuadGenerator::TYPE)) visitor.visit(*((NiPSFacingQuadGenerator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSAlignedQuadGenerator::TYPE)) visitor.visit(*((NiPSAlignedQuadGenerator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulator::TYPE)) visitor.visit(*((NiPSSimulator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorStep::TYPE)) visitor.visit(*((NiPSSimulatorStep*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorGeneralStep::TYPE)) visitor.visit(*((NiPSSimulatorGeneralStep*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorForcesStep::TYPE)) visitor.visit(*((NiPSSimulatorForcesStep*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorCollidersStep::TYPE)) visitor.visit(*((NiPSSimulatorCollidersStep*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorMeshAlignStep::TYPE)) visitor.visit(*((NiPSSimulatorMeshAlignStep*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSimulatorFinalStep::TYPE)) visitor.visit(*((NiPSSimulatorFinalStep*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSBoundUpdater::TYPE)) visitor.visit(*((NiPSBoundUpdater*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForce::TYPE)) visitor.visit(*((NiPSForce*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSDragForce::TYPE)) visitor.visit(*((NiPSDragForce*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSGravityForce::TYPE)) visitor.visit(*((NiPSGravityForce*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSBombForce::TYPE)) visitor.visit(*((NiPSBombForce*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitter::TYPE)) visitor.visit(*((NiPSEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSVolumeEmitter::TYPE)) visitor.visit(*((NiPSVolumeEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSBoxEmitter::TYPE)) visitor.visit(*((NiPSBoxEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSphereEmitter::TYPE)) visitor.visit(*((NiPSSphereEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSCylinderEmitter::TYPE)) visitor.visit(*((NiPSCylinderEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSMeshEmitter::TYPE)) visitor.visit(*((NiPSMeshEmitter*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterCtlr::TYPE)) visitor.visit(*((NiPSEmitterCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterFloatCtlr::TYPE)) visitor.visit(*((NiPSEmitterFloatCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitParticlesCtlr::TYPE)) visitor.visit(*((NiPSEmitParticlesCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForceCtlr::TYPE)) visitor.visit(*((NiPSForceCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForceBoolCtlr::TYPE)) visitor.visit(*((NiPSForceBoolCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForceFloatCtlr::TYPE)) visitor.visit(*((NiPSForceFloatCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSForceActiveCtlr::TYPE)) visitor.visit(*((NiPSForceActiveCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSGravityStrengthCtlr::TYPE)) visitor.visit(*((NiPSGravityStrengthCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterSpeedCtlr::TYPE)) visitor.visit(*((NiPSEmitterSpeedCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRadiusCtlr::TYPE)) visitor.visit(*((NiPSEmitterRadiusCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterDeclinationCtlr::TYPE)) visitor.visit(*((NiPSEmitterDeclinationCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterDeclinationVarCtlr::TYPE)) visitor.visit(*((NiPSEmitterDeclinationVarCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterPlanarAngleCtlr::TYPE)) visitor.visit(*((NiPSEmitterPlanarAngleCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterPlanarAngleVarCtlr::TYPE)) visitor.visit(*((NiPSEmitterPlanarAngleVarCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRotAngleCtlr::TYPE)) visitor.visit(*((NiPSEmitterRotAngleCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRotAngleVarCtlr::TYPE)) visitor.visit(*((NiPSEmitterRotAngleVarCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRotSpeedCtlr::TYPE)) visitor.visit(*((NiPSEmitterRotSpeedCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterRotSpeedVarCtlr::TYPE)) visitor.visit(*((NiPSEmitterRotSpeedVarCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSEmitterLifeSpanCtlr::TYPE)) visitor.visit(*((NiPSEmitterLifeSpanCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSResetOnLoopCtlr::TYPE)) visitor.visit(*((NiPSResetOnLoopCtlr*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSCollider::TYPE)) visitor.visit(*((NiPSCollider*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSPlanarCollider::TYPE)) visitor.visit(*((NiPSPlanarCollider*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSphericalCollider::TYPE)) visitor.visit(*((NiPSSphericalCollider*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiPSSpawner::TYPE)) visitor.visit(*((NiPSSpawner*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiSequenceData::TYPE)) visitor.visit(*((NiSequenceData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiTransformEvaluator::TYPE)) visitor.visit(*((NiTransformEvaluator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiBSplineCompTransformEvaluator::TYPE)) visitor.visit(*((NiBSplineCompTransformEvaluator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiShadowGenerator::TYPE)) visitor.visit(*((NiShadowGenerator*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiFurSpringController::TYPE)) visitor.visit(*((NiFurSpringController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(CStreamableAssetData::TYPE)) visitor.visit(*((CStreamableAssetData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkCompressedMeshShape::TYPE)) visitor.visit(*((bhkCompressedMeshShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkCompressedMeshShapeData::TYPE)) visitor.visit(*((bhkCompressedMeshShapeData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSInvMarker::TYPE)) visitor.visit(*((BSInvMarker*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSBoneLODExtraData::TYPE)) visitor.visit(*((BSBoneLODExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSBehaviorGraphExtraData::TYPE)) visitor.visit(*((BSBehaviorGraphExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSLagBoneController::TYPE)) visitor.visit(*((BSLagBoneController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSLODTriShape::TYPE)) visitor.visit(*((BSLODTriShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSFurnitureMarkerNode::TYPE)) visitor.visit(*((BSFurnitureMarkerNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSLeafAnimNode::TYPE)) visitor.visit(*((BSLeafAnimNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSTreeNode::TYPE)) visitor.visit(*((BSTreeNode*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSTriShape::TYPE)) visitor.visit(*((BSTriShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSMeshLODTriShape::TYPE)) visitor.visit(*((BSMeshLODTriShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSSubIndexTriShape::TYPE)) visitor.visit(*((BSSubIndexTriShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkSystem::TYPE)) visitor.visit(*((bhkSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkNPCollisionObject::TYPE)) visitor.visit(*((bhkNPCollisionObject*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkPhysicsSystem::TYPE)) visitor.visit(*((bhkPhysicsSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(bhkRagdollSystem::TYPE)) visitor.visit(*((bhkRagdollSystem*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSExtraData::TYPE)) visitor.visit(*((BSExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSClothExtraData::TYPE)) visitor.visit(*((BSClothExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSSkin__Instance::TYPE)) visitor.visit(*((BSSkin__Instance*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSSkin__BoneData::TYPE)) visitor.visit(*((BSSkin__BoneData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPositionData::TYPE)) visitor.visit(*((BSPositionData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSConnectPoint__Parents::TYPE)) visitor.visit(*((BSConnectPoint__Parents*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSConnectPoint__Children::TYPE)) visitor.visit(*((BSConnectPoint__Children*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSEyeCenterExtraData::TYPE)) visitor.visit(*((BSEyeCenterExtraData*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSPackedCombinedSharedGeomDataExtra::TYPE)) visitor.visit(*((BSPackedCombinedSharedGeomDataExtra*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(NiLightRadiusController::TYPE)) visitor.visit(*((NiLightRadiusController*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSDynamicTriShape::TYPE)) visitor.visit(*((BSDynamicTriShape*)(&*niobjectref)));return;
		if (niobjectref->GetInternalType().IsSameType(BSDistantObjectLargeRefExtraData::TYPE)) visitor.visit(*((BSDistantObjectLargeRefExtraData*)(&*niobjectref)));return;
	}
}

#endif