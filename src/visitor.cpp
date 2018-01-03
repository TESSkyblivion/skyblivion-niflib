#include <visitor.h>

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

using namespace Niflib;
template <typename T> void VisitorImpl<T>::visit(NiObject& in) {
	if (ni->GetInternalType().IsSameType(Ni3dsAlphaAnimator::TYPE)) delegate.visit((Ni3dsAlphaAnimator)in);return;
	if (ni->GetInternalType().IsSameType(Ni3dsAnimationNode::TYPE)) delegate.visit((Ni3dsAnimationNode)in);return;
	if (ni->GetInternalType().IsSameType(Ni3dsColorAnimator::TYPE)) delegate.visit((Ni3dsColorAnimator)in);return;
	if (ni->GetInternalType().IsSameType(Ni3dsMorphShape::TYPE)) delegate.visit((Ni3dsMorphShape)in);return;
	if (ni->GetInternalType().IsSameType(Ni3dsParticleSystem::TYPE)) delegate.visit((Ni3dsParticleSystem)in);return;
	if (ni->GetInternalType().IsSameType(Ni3dsPathController::TYPE)) delegate.visit((Ni3dsPathController)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleModifier::TYPE)) delegate.visit((NiParticleModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysCollider::TYPE)) delegate.visit((NiPSysCollider)in);return;
	if (ni->GetInternalType().IsSameType(bhkRefObject::TYPE)) delegate.visit((bhkRefObject)in);return;
	if (ni->GetInternalType().IsSameType(bhkSerializable::TYPE)) delegate.visit((bhkSerializable)in);return;
	if (ni->GetInternalType().IsSameType(bhkWorldObject::TYPE)) delegate.visit((bhkWorldObject)in);return;
	if (ni->GetInternalType().IsSameType(bhkPhantom::TYPE)) delegate.visit((bhkPhantom)in);return;
	if (ni->GetInternalType().IsSameType(bhkShapePhantom::TYPE)) delegate.visit((bhkShapePhantom)in);return;
	if (ni->GetInternalType().IsSameType(bhkSimpleShapePhantom::TYPE)) delegate.visit((bhkSimpleShapePhantom)in);return;
	if (ni->GetInternalType().IsSameType(bhkEntity::TYPE)) delegate.visit((bhkEntity)in);return;
	if (ni->GetInternalType().IsSameType(bhkRigidBody::TYPE)) delegate.visit((bhkRigidBody)in);return;
	if (ni->GetInternalType().IsSameType(bhkRigidBodyT::TYPE)) delegate.visit((bhkRigidBodyT)in);return;
	if (ni->GetInternalType().IsSameType(bhkConstraint::TYPE)) delegate.visit((bhkConstraint)in);return;
	if (ni->GetInternalType().IsSameType(bhkLimitedHingeConstraint::TYPE)) delegate.visit((bhkLimitedHingeConstraint)in);return;
	if (ni->GetInternalType().IsSameType(bhkMalleableConstraint::TYPE)) delegate.visit((bhkMalleableConstraint)in);return;
	if (ni->GetInternalType().IsSameType(bhkStiffSpringConstraint::TYPE)) delegate.visit((bhkStiffSpringConstraint)in);return;
	if (ni->GetInternalType().IsSameType(bhkRagdollConstraint::TYPE)) delegate.visit((bhkRagdollConstraint)in);return;
	if (ni->GetInternalType().IsSameType(bhkPrismaticConstraint::TYPE)) delegate.visit((bhkPrismaticConstraint)in);return;
	if (ni->GetInternalType().IsSameType(bhkHingeConstraint::TYPE)) delegate.visit((bhkHingeConstraint)in);return;
	if (ni->GetInternalType().IsSameType(bhkBallAndSocketConstraint::TYPE)) delegate.visit((bhkBallAndSocketConstraint)in);return;
	if (ni->GetInternalType().IsSameType(bhkBallSocketConstraintChain::TYPE)) delegate.visit((bhkBallSocketConstraintChain)in);return;
	if (ni->GetInternalType().IsSameType(bhkShape::TYPE)) delegate.visit((bhkShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkTransformShape::TYPE)) delegate.visit((bhkTransformShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkSphereRepShape::TYPE)) delegate.visit((bhkSphereRepShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkConvexShape::TYPE)) delegate.visit((bhkConvexShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkSphereShape::TYPE)) delegate.visit((bhkSphereShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkCapsuleShape::TYPE)) delegate.visit((bhkCapsuleShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkBoxShape::TYPE)) delegate.visit((bhkBoxShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkConvexVerticesShape::TYPE)) delegate.visit((bhkConvexVerticesShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkConvexTransformShape::TYPE)) delegate.visit((bhkConvexTransformShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkMultiSphereShape::TYPE)) delegate.visit((bhkMultiSphereShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkBvTreeShape::TYPE)) delegate.visit((bhkBvTreeShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkMoppBvTreeShape::TYPE)) delegate.visit((bhkMoppBvTreeShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkShapeCollection::TYPE)) delegate.visit((bhkShapeCollection)in);return;
	if (ni->GetInternalType().IsSameType(bhkListShape::TYPE)) delegate.visit((bhkListShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkMeshShape::TYPE)) delegate.visit((bhkMeshShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkPackedNiTriStripsShape::TYPE)) delegate.visit((bhkPackedNiTriStripsShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkNiTriStripsShape::TYPE)) delegate.visit((bhkNiTriStripsShape)in);return;
	if (ni->GetInternalType().IsSameType(NiExtraData::TYPE)) delegate.visit((NiExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiInterpolator::TYPE)) delegate.visit((NiInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiKeyBasedInterpolator::TYPE)) delegate.visit((NiKeyBasedInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiFloatInterpolator::TYPE)) delegate.visit((NiFloatInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiTransformInterpolator::TYPE)) delegate.visit((NiTransformInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiPoint3Interpolator::TYPE)) delegate.visit((NiPoint3Interpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiPathInterpolator::TYPE)) delegate.visit((NiPathInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBoolInterpolator::TYPE)) delegate.visit((NiBoolInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBoolTimelineInterpolator::TYPE)) delegate.visit((NiBoolTimelineInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBlendInterpolator::TYPE)) delegate.visit((NiBlendInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplineInterpolator::TYPE)) delegate.visit((NiBSplineInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiObjectNET::TYPE)) delegate.visit((NiObjectNET)in);return;
	if (ni->GetInternalType().IsSameType(NiCollisionObject::TYPE)) delegate.visit((NiCollisionObject)in);return;
	if (ni->GetInternalType().IsSameType(NiCollisionData::TYPE)) delegate.visit((NiCollisionData)in);return;
	if (ni->GetInternalType().IsSameType(bhkNiCollisionObject::TYPE)) delegate.visit((bhkNiCollisionObject)in);return;
	if (ni->GetInternalType().IsSameType(bhkCollisionObject::TYPE)) delegate.visit((bhkCollisionObject)in);return;
	if (ni->GetInternalType().IsSameType(bhkBlendCollisionObject::TYPE)) delegate.visit((bhkBlendCollisionObject)in);return;
	if (ni->GetInternalType().IsSameType(bhkPCollisionObject::TYPE)) delegate.visit((bhkPCollisionObject)in);return;
	if (ni->GetInternalType().IsSameType(bhkSPCollisionObject::TYPE)) delegate.visit((bhkSPCollisionObject)in);return;
	if (ni->GetInternalType().IsSameType(NiAVObject::TYPE)) delegate.visit((NiAVObject)in);return;
	if (ni->GetInternalType().IsSameType(NiDynamicEffect::TYPE)) delegate.visit((NiDynamicEffect)in);return;
	if (ni->GetInternalType().IsSameType(NiLight::TYPE)) delegate.visit((NiLight)in);return;
	if (ni->GetInternalType().IsSameType(NiProperty::TYPE)) delegate.visit((NiProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiTransparentProperty::TYPE)) delegate.visit((NiTransparentProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysModifier::TYPE)) delegate.visit((NiPSysModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitter::TYPE)) delegate.visit((NiPSysEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysVolumeEmitter::TYPE)) delegate.visit((NiPSysVolumeEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiTimeController::TYPE)) delegate.visit((NiTimeController)in);return;
	if (ni->GetInternalType().IsSameType(NiInterpController::TYPE)) delegate.visit((NiInterpController)in);return;
	if (ni->GetInternalType().IsSameType(NiMultiTargetTransformController::TYPE)) delegate.visit((NiMultiTargetTransformController)in);return;
	if (ni->GetInternalType().IsSameType(NiGeomMorpherController::TYPE)) delegate.visit((NiGeomMorpherController)in);return;
	if (ni->GetInternalType().IsSameType(NiMorphController::TYPE)) delegate.visit((NiMorphController)in);return;
	if (ni->GetInternalType().IsSameType(NiMorpherController::TYPE)) delegate.visit((NiMorpherController)in);return;
	if (ni->GetInternalType().IsSameType(NiSingleInterpController::TYPE)) delegate.visit((NiSingleInterpController)in);return;
	if (ni->GetInternalType().IsSameType(NiKeyframeController::TYPE)) delegate.visit((NiKeyframeController)in);return;
	if (ni->GetInternalType().IsSameType(NiTransformController::TYPE)) delegate.visit((NiTransformController)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysModifierCtlr::TYPE)) delegate.visit((NiPSysModifierCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitterCtlr::TYPE)) delegate.visit((NiPSysEmitterCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysModifierBoolCtlr::TYPE)) delegate.visit((NiPSysModifierBoolCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysModifierActiveCtlr::TYPE)) delegate.visit((NiPSysModifierActiveCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysModifierFloatCtlr::TYPE)) delegate.visit((NiPSysModifierFloatCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitterDeclinationCtlr::TYPE)) delegate.visit((NiPSysEmitterDeclinationCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitterDeclinationVarCtlr::TYPE)) delegate.visit((NiPSysEmitterDeclinationVarCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitterInitialRadiusCtlr::TYPE)) delegate.visit((NiPSysEmitterInitialRadiusCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitterLifeSpanCtlr::TYPE)) delegate.visit((NiPSysEmitterLifeSpanCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitterSpeedCtlr::TYPE)) delegate.visit((NiPSysEmitterSpeedCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysGravityStrengthCtlr::TYPE)) delegate.visit((NiPSysGravityStrengthCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiFloatInterpController::TYPE)) delegate.visit((NiFloatInterpController)in);return;
	if (ni->GetInternalType().IsSameType(NiFlipController::TYPE)) delegate.visit((NiFlipController)in);return;
	if (ni->GetInternalType().IsSameType(NiAlphaController::TYPE)) delegate.visit((NiAlphaController)in);return;
	if (ni->GetInternalType().IsSameType(NiTextureTransformController::TYPE)) delegate.visit((NiTextureTransformController)in);return;
	if (ni->GetInternalType().IsSameType(NiLightDimmerController::TYPE)) delegate.visit((NiLightDimmerController)in);return;
	if (ni->GetInternalType().IsSameType(NiBoolInterpController::TYPE)) delegate.visit((NiBoolInterpController)in);return;
	if (ni->GetInternalType().IsSameType(NiVisController::TYPE)) delegate.visit((NiVisController)in);return;
	if (ni->GetInternalType().IsSameType(NiPoint3InterpController::TYPE)) delegate.visit((NiPoint3InterpController)in);return;
	if (ni->GetInternalType().IsSameType(NiMaterialColorController::TYPE)) delegate.visit((NiMaterialColorController)in);return;
	if (ni->GetInternalType().IsSameType(NiLightColorController::TYPE)) delegate.visit((NiLightColorController)in);return;
	if (ni->GetInternalType().IsSameType(NiExtraDataController::TYPE)) delegate.visit((NiExtraDataController)in);return;
	if (ni->GetInternalType().IsSameType(NiFloatExtraDataController::TYPE)) delegate.visit((NiFloatExtraDataController)in);return;
	if (ni->GetInternalType().IsSameType(NiFloatsExtraDataController::TYPE)) delegate.visit((NiFloatsExtraDataController)in);return;
	if (ni->GetInternalType().IsSameType(NiFloatsExtraDataPoint3Controller::TYPE)) delegate.visit((NiFloatsExtraDataPoint3Controller)in);return;
	if (ni->GetInternalType().IsSameType(NiBoneLODController::TYPE)) delegate.visit((NiBoneLODController)in);return;
	if (ni->GetInternalType().IsSameType(NiBSBoneLODController::TYPE)) delegate.visit((NiBSBoneLODController)in);return;
	if (ni->GetInternalType().IsSameType(NiGeometry::TYPE)) delegate.visit((NiGeometry)in);return;
	if (ni->GetInternalType().IsSameType(NiTriBasedGeom::TYPE)) delegate.visit((NiTriBasedGeom)in);return;
	if (ni->GetInternalType().IsSameType(NiGeometryData::TYPE)) delegate.visit((NiGeometryData)in);return;
	if (ni->GetInternalType().IsSameType(AbstractAdditionalGeometryData::TYPE)) delegate.visit((AbstractAdditionalGeometryData)in);return;
	if (ni->GetInternalType().IsSameType(NiTriBasedGeomData::TYPE)) delegate.visit((NiTriBasedGeomData)in);return;
	if (ni->GetInternalType().IsSameType(bhkBlendController::TYPE)) delegate.visit((bhkBlendController)in);return;
	if (ni->GetInternalType().IsSameType(BSBound::TYPE)) delegate.visit((BSBound)in);return;
	if (ni->GetInternalType().IsSameType(BSFurnitureMarker::TYPE)) delegate.visit((BSFurnitureMarker)in);return;
	if (ni->GetInternalType().IsSameType(BSParentVelocityModifier::TYPE)) delegate.visit((BSParentVelocityModifier)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysArrayEmitter::TYPE)) delegate.visit((BSPSysArrayEmitter)in);return;
	if (ni->GetInternalType().IsSameType(BSWindModifier::TYPE)) delegate.visit((BSWindModifier)in);return;
	if (ni->GetInternalType().IsSameType(hkPackedNiTriStripsData::TYPE)) delegate.visit((hkPackedNiTriStripsData)in);return;
	if (ni->GetInternalType().IsSameType(NiAlphaProperty::TYPE)) delegate.visit((NiAlphaProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiAmbientLight::TYPE)) delegate.visit((NiAmbientLight)in);return;
	if (ni->GetInternalType().IsSameType(NiParticlesData::TYPE)) delegate.visit((NiParticlesData)in);return;
	if (ni->GetInternalType().IsSameType(NiRotatingParticlesData::TYPE)) delegate.visit((NiRotatingParticlesData)in);return;
	if (ni->GetInternalType().IsSameType(NiAutoNormalParticlesData::TYPE)) delegate.visit((NiAutoNormalParticlesData)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysData::TYPE)) delegate.visit((NiPSysData)in);return;
	if (ni->GetInternalType().IsSameType(NiMeshPSysData::TYPE)) delegate.visit((NiMeshPSysData)in);return;
	if (ni->GetInternalType().IsSameType(NiBinaryExtraData::TYPE)) delegate.visit((NiBinaryExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiBinaryVoxelExtraData::TYPE)) delegate.visit((NiBinaryVoxelExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiBinaryVoxelData::TYPE)) delegate.visit((NiBinaryVoxelData)in);return;
	if (ni->GetInternalType().IsSameType(NiBlendBoolInterpolator::TYPE)) delegate.visit((NiBlendBoolInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBlendFloatInterpolator::TYPE)) delegate.visit((NiBlendFloatInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBlendPoint3Interpolator::TYPE)) delegate.visit((NiBlendPoint3Interpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBlendTransformInterpolator::TYPE)) delegate.visit((NiBlendTransformInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBoolData::TYPE)) delegate.visit((NiBoolData)in);return;
	if (ni->GetInternalType().IsSameType(NiBooleanExtraData::TYPE)) delegate.visit((NiBooleanExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplineBasisData::TYPE)) delegate.visit((NiBSplineBasisData)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplineFloatInterpolator::TYPE)) delegate.visit((NiBSplineFloatInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplineCompFloatInterpolator::TYPE)) delegate.visit((NiBSplineCompFloatInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplinePoint3Interpolator::TYPE)) delegate.visit((NiBSplinePoint3Interpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplineCompPoint3Interpolator::TYPE)) delegate.visit((NiBSplineCompPoint3Interpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplineTransformInterpolator::TYPE)) delegate.visit((NiBSplineTransformInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplineCompTransformInterpolator::TYPE)) delegate.visit((NiBSplineCompTransformInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(BSRotAccumTransfInterpolator::TYPE)) delegate.visit((BSRotAccumTransfInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplineData::TYPE)) delegate.visit((NiBSplineData)in);return;
	if (ni->GetInternalType().IsSameType(NiCamera::TYPE)) delegate.visit((NiCamera)in);return;
	if (ni->GetInternalType().IsSameType(NiColorData::TYPE)) delegate.visit((NiColorData)in);return;
	if (ni->GetInternalType().IsSameType(NiColorExtraData::TYPE)) delegate.visit((NiColorExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiControllerManager::TYPE)) delegate.visit((NiControllerManager)in);return;
	if (ni->GetInternalType().IsSameType(NiSequence::TYPE)) delegate.visit((NiSequence)in);return;
	if (ni->GetInternalType().IsSameType(NiControllerSequence::TYPE)) delegate.visit((NiControllerSequence)in);return;
	if (ni->GetInternalType().IsSameType(NiAVObjectPalette::TYPE)) delegate.visit((NiAVObjectPalette)in);return;
	if (ni->GetInternalType().IsSameType(NiDefaultAVObjectPalette::TYPE)) delegate.visit((NiDefaultAVObjectPalette)in);return;
	if (ni->GetInternalType().IsSameType(NiDirectionalLight::TYPE)) delegate.visit((NiDirectionalLight)in);return;
	if (ni->GetInternalType().IsSameType(NiDitherProperty::TYPE)) delegate.visit((NiDitherProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiRollController::TYPE)) delegate.visit((NiRollController)in);return;
	if (ni->GetInternalType().IsSameType(NiFloatData::TYPE)) delegate.visit((NiFloatData)in);return;
	if (ni->GetInternalType().IsSameType(NiFloatExtraData::TYPE)) delegate.visit((NiFloatExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiFloatsExtraData::TYPE)) delegate.visit((NiFloatsExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiFogProperty::TYPE)) delegate.visit((NiFogProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiGravity::TYPE)) delegate.visit((NiGravity)in);return;
	if (ni->GetInternalType().IsSameType(NiIntegerExtraData::TYPE)) delegate.visit((NiIntegerExtraData)in);return;
	if (ni->GetInternalType().IsSameType(BSXFlags::TYPE)) delegate.visit((BSXFlags)in);return;
	if (ni->GetInternalType().IsSameType(NiIntegersExtraData::TYPE)) delegate.visit((NiIntegersExtraData)in);return;
	if (ni->GetInternalType().IsSameType(BSKeyframeController::TYPE)) delegate.visit((BSKeyframeController)in);return;
	if (ni->GetInternalType().IsSameType(NiKeyframeData::TYPE)) delegate.visit((NiKeyframeData)in);return;
	if (ni->GetInternalType().IsSameType(NiLookAtController::TYPE)) delegate.visit((NiLookAtController)in);return;
	if (ni->GetInternalType().IsSameType(NiLookAtInterpolator::TYPE)) delegate.visit((NiLookAtInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(NiMaterialProperty::TYPE)) delegate.visit((NiMaterialProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiMorphData::TYPE)) delegate.visit((NiMorphData)in);return;
	if (ni->GetInternalType().IsSameType(NiNode::TYPE)) delegate.visit((NiNode)in);return;
	if (ni->GetInternalType().IsSameType(NiBone::TYPE)) delegate.visit((NiBone)in);return;
	if (ni->GetInternalType().IsSameType(AvoidNode::TYPE)) delegate.visit((AvoidNode)in);return;
	if (ni->GetInternalType().IsSameType(FxWidget::TYPE)) delegate.visit((FxWidget)in);return;
	if (ni->GetInternalType().IsSameType(FxButton::TYPE)) delegate.visit((FxButton)in);return;
	if (ni->GetInternalType().IsSameType(FxRadioButton::TYPE)) delegate.visit((FxRadioButton)in);return;
	if (ni->GetInternalType().IsSameType(NiBillboardNode::TYPE)) delegate.visit((NiBillboardNode)in);return;
	if (ni->GetInternalType().IsSameType(NiBSAnimationNode::TYPE)) delegate.visit((NiBSAnimationNode)in);return;
	if (ni->GetInternalType().IsSameType(NiBSParticleNode::TYPE)) delegate.visit((NiBSParticleNode)in);return;
	if (ni->GetInternalType().IsSameType(NiSwitchNode::TYPE)) delegate.visit((NiSwitchNode)in);return;
	if (ni->GetInternalType().IsSameType(NiLODNode::TYPE)) delegate.visit((NiLODNode)in);return;
	if (ni->GetInternalType().IsSameType(NiPalette::TYPE)) delegate.visit((NiPalette)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleBomb::TYPE)) delegate.visit((NiParticleBomb)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleColorModifier::TYPE)) delegate.visit((NiParticleColorModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleGrowFade::TYPE)) delegate.visit((NiParticleGrowFade)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleMeshModifier::TYPE)) delegate.visit((NiParticleMeshModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleRotation::TYPE)) delegate.visit((NiParticleRotation)in);return;
	if (ni->GetInternalType().IsSameType(NiParticles::TYPE)) delegate.visit((NiParticles)in);return;
	if (ni->GetInternalType().IsSameType(NiAutoNormalParticles::TYPE)) delegate.visit((NiAutoNormalParticles)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleMeshes::TYPE)) delegate.visit((NiParticleMeshes)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleMeshesData::TYPE)) delegate.visit((NiParticleMeshesData)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleSystem::TYPE)) delegate.visit((NiParticleSystem)in);return;
	if (ni->GetInternalType().IsSameType(NiMeshParticleSystem::TYPE)) delegate.visit((NiMeshParticleSystem)in);return;
	if (ni->GetInternalType().IsSameType(NiParticleSystemController::TYPE)) delegate.visit((NiParticleSystemController)in);return;
	if (ni->GetInternalType().IsSameType(NiBSPArrayController::TYPE)) delegate.visit((NiBSPArrayController)in);return;
	if (ni->GetInternalType().IsSameType(NiPathController::TYPE)) delegate.visit((NiPathController)in);return;
	if (ni->GetInternalType().IsSameType(NiPixelFormat::TYPE)) delegate.visit((NiPixelFormat)in);return;
	if (ni->GetInternalType().IsSameType(NiPersistentSrcTextureRendererData::TYPE)) delegate.visit((NiPersistentSrcTextureRendererData)in);return;
	if (ni->GetInternalType().IsSameType(NiPixelData::TYPE)) delegate.visit((NiPixelData)in);return;
	if (ni->GetInternalType().IsSameType(NiPlanarCollider::TYPE)) delegate.visit((NiPlanarCollider)in);return;
	if (ni->GetInternalType().IsSameType(NiPointLight::TYPE)) delegate.visit((NiPointLight)in);return;
	if (ni->GetInternalType().IsSameType(NiPosData::TYPE)) delegate.visit((NiPosData)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysAgeDeathModifier::TYPE)) delegate.visit((NiPSysAgeDeathModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysBombModifier::TYPE)) delegate.visit((NiPSysBombModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysBoundUpdateModifier::TYPE)) delegate.visit((NiPSysBoundUpdateModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysBoxEmitter::TYPE)) delegate.visit((NiPSysBoxEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysColliderManager::TYPE)) delegate.visit((NiPSysColliderManager)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysColorModifier::TYPE)) delegate.visit((NiPSysColorModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysCylinderEmitter::TYPE)) delegate.visit((NiPSysCylinderEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysDragModifier::TYPE)) delegate.visit((NiPSysDragModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitterCtlrData::TYPE)) delegate.visit((NiPSysEmitterCtlrData)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysGravityModifier::TYPE)) delegate.visit((NiPSysGravityModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysGrowFadeModifier::TYPE)) delegate.visit((NiPSysGrowFadeModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysMeshEmitter::TYPE)) delegate.visit((NiPSysMeshEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysMeshUpdateModifier::TYPE)) delegate.visit((NiPSysMeshUpdateModifier)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysInheritVelocityModifier::TYPE)) delegate.visit((BSPSysInheritVelocityModifier)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysHavokUpdateModifier::TYPE)) delegate.visit((BSPSysHavokUpdateModifier)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysRecycleBoundModifier::TYPE)) delegate.visit((BSPSysRecycleBoundModifier)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysSubTexModifier::TYPE)) delegate.visit((BSPSysSubTexModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysPlanarCollider::TYPE)) delegate.visit((NiPSysPlanarCollider)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysSphericalCollider::TYPE)) delegate.visit((NiPSysSphericalCollider)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysPositionModifier::TYPE)) delegate.visit((NiPSysPositionModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysResetOnLoopCtlr::TYPE)) delegate.visit((NiPSysResetOnLoopCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysRotationModifier::TYPE)) delegate.visit((NiPSysRotationModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysSpawnModifier::TYPE)) delegate.visit((NiPSysSpawnModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysSphereEmitter::TYPE)) delegate.visit((NiPSysSphereEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysUpdateCtlr::TYPE)) delegate.visit((NiPSysUpdateCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysFieldModifier::TYPE)) delegate.visit((NiPSysFieldModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysVortexFieldModifier::TYPE)) delegate.visit((NiPSysVortexFieldModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysGravityFieldModifier::TYPE)) delegate.visit((NiPSysGravityFieldModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysDragFieldModifier::TYPE)) delegate.visit((NiPSysDragFieldModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysTurbulenceFieldModifier::TYPE)) delegate.visit((NiPSysTurbulenceFieldModifier)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysLODModifier::TYPE)) delegate.visit((BSPSysLODModifier)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysScaleModifier::TYPE)) delegate.visit((BSPSysScaleModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysFieldMagnitudeCtlr::TYPE)) delegate.visit((NiPSysFieldMagnitudeCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysFieldAttenuationCtlr::TYPE)) delegate.visit((NiPSysFieldAttenuationCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysFieldMaxDistanceCtlr::TYPE)) delegate.visit((NiPSysFieldMaxDistanceCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysAirFieldAirFrictionCtlr::TYPE)) delegate.visit((NiPSysAirFieldAirFrictionCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysAirFieldInheritVelocityCtlr::TYPE)) delegate.visit((NiPSysAirFieldInheritVelocityCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysAirFieldSpreadCtlr::TYPE)) delegate.visit((NiPSysAirFieldSpreadCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysInitialRotSpeedCtlr::TYPE)) delegate.visit((NiPSysInitialRotSpeedCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysInitialRotSpeedVarCtlr::TYPE)) delegate.visit((NiPSysInitialRotSpeedVarCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysInitialRotAngleCtlr::TYPE)) delegate.visit((NiPSysInitialRotAngleCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysInitialRotAngleVarCtlr::TYPE)) delegate.visit((NiPSysInitialRotAngleVarCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitterPlanarAngleCtlr::TYPE)) delegate.visit((NiPSysEmitterPlanarAngleCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysEmitterPlanarAngleVarCtlr::TYPE)) delegate.visit((NiPSysEmitterPlanarAngleVarCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysAirFieldModifier::TYPE)) delegate.visit((NiPSysAirFieldModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysTrailEmitter::TYPE)) delegate.visit((NiPSysTrailEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiLightIntensityController::TYPE)) delegate.visit((NiLightIntensityController)in);return;
	if (ni->GetInternalType().IsSameType(NiPSysRadialFieldModifier::TYPE)) delegate.visit((NiPSysRadialFieldModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiLODData::TYPE)) delegate.visit((NiLODData)in);return;
	if (ni->GetInternalType().IsSameType(NiRangeLODData::TYPE)) delegate.visit((NiRangeLODData)in);return;
	if (ni->GetInternalType().IsSameType(NiScreenLODData::TYPE)) delegate.visit((NiScreenLODData)in);return;
	if (ni->GetInternalType().IsSameType(NiRotatingParticles::TYPE)) delegate.visit((NiRotatingParticles)in);return;
	if (ni->GetInternalType().IsSameType(NiSequenceStreamHelper::TYPE)) delegate.visit((NiSequenceStreamHelper)in);return;
	if (ni->GetInternalType().IsSameType(NiShadeProperty::TYPE)) delegate.visit((NiShadeProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiSkinData::TYPE)) delegate.visit((NiSkinData)in);return;
	if (ni->GetInternalType().IsSameType(NiSkinInstance::TYPE)) delegate.visit((NiSkinInstance)in);return;
	if (ni->GetInternalType().IsSameType(NiTriShapeSkinController::TYPE)) delegate.visit((NiTriShapeSkinController)in);return;
	if (ni->GetInternalType().IsSameType(NiClodSkinInstance::TYPE)) delegate.visit((NiClodSkinInstance)in);return;
	if (ni->GetInternalType().IsSameType(NiSkinPartition::TYPE)) delegate.visit((NiSkinPartition)in);return;
	if (ni->GetInternalType().IsSameType(NiTexture::TYPE)) delegate.visit((NiTexture)in);return;
	if (ni->GetInternalType().IsSameType(NiSourceTexture::TYPE)) delegate.visit((NiSourceTexture)in);return;
	if (ni->GetInternalType().IsSameType(NiSpecularProperty::TYPE)) delegate.visit((NiSpecularProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiSphericalCollider::TYPE)) delegate.visit((NiSphericalCollider)in);return;
	if (ni->GetInternalType().IsSameType(NiSpotLight::TYPE)) delegate.visit((NiSpotLight)in);return;
	if (ni->GetInternalType().IsSameType(NiStencilProperty::TYPE)) delegate.visit((NiStencilProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiStringExtraData::TYPE)) delegate.visit((NiStringExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiStringPalette::TYPE)) delegate.visit((NiStringPalette)in);return;
	if (ni->GetInternalType().IsSameType(NiStringsExtraData::TYPE)) delegate.visit((NiStringsExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiTextKeyExtraData::TYPE)) delegate.visit((NiTextKeyExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiTextureEffect::TYPE)) delegate.visit((NiTextureEffect)in);return;
	if (ni->GetInternalType().IsSameType(NiTextureModeProperty::TYPE)) delegate.visit((NiTextureModeProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiImage::TYPE)) delegate.visit((NiImage)in);return;
	if (ni->GetInternalType().IsSameType(NiTextureProperty::TYPE)) delegate.visit((NiTextureProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiTexturingProperty::TYPE)) delegate.visit((NiTexturingProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiMultiTextureProperty::TYPE)) delegate.visit((NiMultiTextureProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiTransformData::TYPE)) delegate.visit((NiTransformData)in);return;
	if (ni->GetInternalType().IsSameType(NiTriShape::TYPE)) delegate.visit((NiTriShape)in);return;
	if (ni->GetInternalType().IsSameType(NiTriShapeData::TYPE)) delegate.visit((NiTriShapeData)in);return;
	if (ni->GetInternalType().IsSameType(NiTriStrips::TYPE)) delegate.visit((NiTriStrips)in);return;
	if (ni->GetInternalType().IsSameType(NiTriStripsData::TYPE)) delegate.visit((NiTriStripsData)in);return;
	if (ni->GetInternalType().IsSameType(NiEnvMappedTriShape::TYPE)) delegate.visit((NiEnvMappedTriShape)in);return;
	if (ni->GetInternalType().IsSameType(NiEnvMappedTriShapeData::TYPE)) delegate.visit((NiEnvMappedTriShapeData)in);return;
	if (ni->GetInternalType().IsSameType(NiBezierTriangle4::TYPE)) delegate.visit((NiBezierTriangle4)in);return;
	if (ni->GetInternalType().IsSameType(NiBezierMesh::TYPE)) delegate.visit((NiBezierMesh)in);return;
	if (ni->GetInternalType().IsSameType(NiClod::TYPE)) delegate.visit((NiClod)in);return;
	if (ni->GetInternalType().IsSameType(NiClodData::TYPE)) delegate.visit((NiClodData)in);return;
	if (ni->GetInternalType().IsSameType(NiUVController::TYPE)) delegate.visit((NiUVController)in);return;
	if (ni->GetInternalType().IsSameType(NiUVData::TYPE)) delegate.visit((NiUVData)in);return;
	if (ni->GetInternalType().IsSameType(NiVectorExtraData::TYPE)) delegate.visit((NiVectorExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiVertexColorProperty::TYPE)) delegate.visit((NiVertexColorProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiVertWeightsExtraData::TYPE)) delegate.visit((NiVertWeightsExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiVisData::TYPE)) delegate.visit((NiVisData)in);return;
	if (ni->GetInternalType().IsSameType(NiWireframeProperty::TYPE)) delegate.visit((NiWireframeProperty)in);return;
	if (ni->GetInternalType().IsSameType(NiZBufferProperty::TYPE)) delegate.visit((NiZBufferProperty)in);return;
	if (ni->GetInternalType().IsSameType(RootCollisionNode::TYPE)) delegate.visit((RootCollisionNode)in);return;
	if (ni->GetInternalType().IsSameType(NiRawImageData::TYPE)) delegate.visit((NiRawImageData)in);return;
	if (ni->GetInternalType().IsSameType(NiAccumulator::TYPE)) delegate.visit((NiAccumulator)in);return;
	if (ni->GetInternalType().IsSameType(NiSortAdjustNode::TYPE)) delegate.visit((NiSortAdjustNode)in);return;
	if (ni->GetInternalType().IsSameType(NiSourceCubeMap::TYPE)) delegate.visit((NiSourceCubeMap)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXProp::TYPE)) delegate.visit((NiPhysXProp)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXPropDesc::TYPE)) delegate.visit((NiPhysXPropDesc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXActorDesc::TYPE)) delegate.visit((NiPhysXActorDesc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXBodyDesc::TYPE)) delegate.visit((NiPhysXBodyDesc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXJointDesc::TYPE)) delegate.visit((NiPhysXJointDesc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXD6JointDesc::TYPE)) delegate.visit((NiPhysXD6JointDesc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXShapeDesc::TYPE)) delegate.visit((NiPhysXShapeDesc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXMeshDesc::TYPE)) delegate.visit((NiPhysXMeshDesc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXMaterialDesc::TYPE)) delegate.visit((NiPhysXMaterialDesc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXDest::TYPE)) delegate.visit((NiPhysXDest)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXRigidBodyDest::TYPE)) delegate.visit((NiPhysXRigidBodyDest)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXTransformDest::TYPE)) delegate.visit((NiPhysXTransformDest)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXSrc::TYPE)) delegate.visit((NiPhysXSrc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXRigidBodySrc::TYPE)) delegate.visit((NiPhysXRigidBodySrc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXKinematicSrc::TYPE)) delegate.visit((NiPhysXKinematicSrc)in);return;
	if (ni->GetInternalType().IsSameType(NiPhysXDynamicSrc::TYPE)) delegate.visit((NiPhysXDynamicSrc)in);return;
	if (ni->GetInternalType().IsSameType(NiArkAnimationExtraData::TYPE)) delegate.visit((NiArkAnimationExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiArkImporterExtraData::TYPE)) delegate.visit((NiArkImporterExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiArkTextureExtraData::TYPE)) delegate.visit((NiArkTextureExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiArkViewportInfoExtraData::TYPE)) delegate.visit((NiArkViewportInfoExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiArkShaderExtraData::TYPE)) delegate.visit((NiArkShaderExtraData)in);return;
	if (ni->GetInternalType().IsSameType(NiLines::TYPE)) delegate.visit((NiLines)in);return;
	if (ni->GetInternalType().IsSameType(NiLinesData::TYPE)) delegate.visit((NiLinesData)in);return;
	if (ni->GetInternalType().IsSameType(NiScreenElementsData::TYPE)) delegate.visit((NiScreenElementsData)in);return;
	if (ni->GetInternalType().IsSameType(NiScreenElements::TYPE)) delegate.visit((NiScreenElements)in);return;
	if (ni->GetInternalType().IsSameType(NiRoomGroup::TYPE)) delegate.visit((NiRoomGroup)in);return;
	if (ni->GetInternalType().IsSameType(NiRoom::TYPE)) delegate.visit((NiRoom)in);return;
	if (ni->GetInternalType().IsSameType(NiPortal::TYPE)) delegate.visit((NiPortal)in);return;
	if (ni->GetInternalType().IsSameType(BSFadeNode::TYPE)) delegate.visit((BSFadeNode)in);return;
	if (ni->GetInternalType().IsSameType(BSShaderProperty::TYPE)) delegate.visit((BSShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSShaderLightingProperty::TYPE)) delegate.visit((BSShaderLightingProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSShaderNoLightingProperty::TYPE)) delegate.visit((BSShaderNoLightingProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSShaderPPLightingProperty::TYPE)) delegate.visit((BSShaderPPLightingProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSEffectShaderPropertyFloatController::TYPE)) delegate.visit((BSEffectShaderPropertyFloatController)in);return;
	if (ni->GetInternalType().IsSameType(BSEffectShaderPropertyColorController::TYPE)) delegate.visit((BSEffectShaderPropertyColorController)in);return;
	if (ni->GetInternalType().IsSameType(BSLightingShaderPropertyFloatController::TYPE)) delegate.visit((BSLightingShaderPropertyFloatController)in);return;
	if (ni->GetInternalType().IsSameType(BSLightingShaderPropertyColorController::TYPE)) delegate.visit((BSLightingShaderPropertyColorController)in);return;
	if (ni->GetInternalType().IsSameType(BSNiAlphaPropertyTestRefController::TYPE)) delegate.visit((BSNiAlphaPropertyTestRefController)in);return;
	if (ni->GetInternalType().IsSameType(BSProceduralLightningController::TYPE)) delegate.visit((BSProceduralLightningController)in);return;
	if (ni->GetInternalType().IsSameType(BSShaderTextureSet::TYPE)) delegate.visit((BSShaderTextureSet)in);return;
	if (ni->GetInternalType().IsSameType(WaterShaderProperty::TYPE)) delegate.visit((WaterShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(SkyShaderProperty::TYPE)) delegate.visit((SkyShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(TileShaderProperty::TYPE)) delegate.visit((TileShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(DistantLODShaderProperty::TYPE)) delegate.visit((DistantLODShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSDistantTreeShaderProperty::TYPE)) delegate.visit((BSDistantTreeShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(TallGrassShaderProperty::TYPE)) delegate.visit((TallGrassShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(VolumetricFogShaderProperty::TYPE)) delegate.visit((VolumetricFogShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(HairShaderProperty::TYPE)) delegate.visit((HairShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(Lighting30ShaderProperty::TYPE)) delegate.visit((Lighting30ShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSLightingShaderProperty::TYPE)) delegate.visit((BSLightingShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSEffectShaderProperty::TYPE)) delegate.visit((BSEffectShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSWaterShaderProperty::TYPE)) delegate.visit((BSWaterShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSSkyShaderProperty::TYPE)) delegate.visit((BSSkyShaderProperty)in);return;
	if (ni->GetInternalType().IsSameType(BSDismemberSkinInstance::TYPE)) delegate.visit((BSDismemberSkinInstance)in);return;
	if (ni->GetInternalType().IsSameType(BSDecalPlacementVectorExtraData::TYPE)) delegate.visit((BSDecalPlacementVectorExtraData)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysSimpleColorModifier::TYPE)) delegate.visit((BSPSysSimpleColorModifier)in);return;
	if (ni->GetInternalType().IsSameType(BSValueNode::TYPE)) delegate.visit((BSValueNode)in);return;
	if (ni->GetInternalType().IsSameType(BSStripParticleSystem::TYPE)) delegate.visit((BSStripParticleSystem)in);return;
	if (ni->GetInternalType().IsSameType(BSStripPSysData::TYPE)) delegate.visit((BSStripPSysData)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysStripUpdateModifier::TYPE)) delegate.visit((BSPSysStripUpdateModifier)in);return;
	if (ni->GetInternalType().IsSameType(BSMaterialEmittanceMultController::TYPE)) delegate.visit((BSMaterialEmittanceMultController)in);return;
	if (ni->GetInternalType().IsSameType(BSMasterParticleSystem::TYPE)) delegate.visit((BSMasterParticleSystem)in);return;
	if (ni->GetInternalType().IsSameType(BSPSysMultiTargetEmitterCtlr::TYPE)) delegate.visit((BSPSysMultiTargetEmitterCtlr)in);return;
	if (ni->GetInternalType().IsSameType(BSRefractionStrengthController::TYPE)) delegate.visit((BSRefractionStrengthController)in);return;
	if (ni->GetInternalType().IsSameType(BSOrderedNode::TYPE)) delegate.visit((BSOrderedNode)in);return;
	if (ni->GetInternalType().IsSameType(BSRangeNode::TYPE)) delegate.visit((BSRangeNode)in);return;
	if (ni->GetInternalType().IsSameType(BSBlastNode::TYPE)) delegate.visit((BSBlastNode)in);return;
	if (ni->GetInternalType().IsSameType(BSDamageStage::TYPE)) delegate.visit((BSDamageStage)in);return;
	if (ni->GetInternalType().IsSameType(BSRefractionFirePeriodController::TYPE)) delegate.visit((BSRefractionFirePeriodController)in);return;
	if (ni->GetInternalType().IsSameType(bhkConvexListShape::TYPE)) delegate.visit((bhkConvexListShape)in);return;
	if (ni->GetInternalType().IsSameType(BSTreadTransfInterpolator::TYPE)) delegate.visit((BSTreadTransfInterpolator)in);return;
	if (ni->GetInternalType().IsSameType(BSAnimNote::TYPE)) delegate.visit((BSAnimNote)in);return;
	if (ni->GetInternalType().IsSameType(BSAnimNotes::TYPE)) delegate.visit((BSAnimNotes)in);return;
	if (ni->GetInternalType().IsSameType(bhkLiquidAction::TYPE)) delegate.visit((bhkLiquidAction)in);return;
	if (ni->GetInternalType().IsSameType(BSMultiBoundNode::TYPE)) delegate.visit((BSMultiBoundNode)in);return;
	if (ni->GetInternalType().IsSameType(BSMultiBound::TYPE)) delegate.visit((BSMultiBound)in);return;
	if (ni->GetInternalType().IsSameType(BSMultiBoundData::TYPE)) delegate.visit((BSMultiBoundData)in);return;
	if (ni->GetInternalType().IsSameType(BSMultiBoundOBB::TYPE)) delegate.visit((BSMultiBoundOBB)in);return;
	if (ni->GetInternalType().IsSameType(BSMultiBoundSphere::TYPE)) delegate.visit((BSMultiBoundSphere)in);return;
	if (ni->GetInternalType().IsSameType(BSSegmentedTriShape::TYPE)) delegate.visit((BSSegmentedTriShape)in);return;
	if (ni->GetInternalType().IsSameType(BSMultiBoundAABB::TYPE)) delegate.visit((BSMultiBoundAABB)in);return;
	if (ni->GetInternalType().IsSameType(NiAdditionalGeometryData::TYPE)) delegate.visit((NiAdditionalGeometryData)in);return;
	if (ni->GetInternalType().IsSameType(BSPackedAdditionalGeometryData::TYPE)) delegate.visit((BSPackedAdditionalGeometryData)in);return;
	if (ni->GetInternalType().IsSameType(BSWArray::TYPE)) delegate.visit((BSWArray)in);return;
	if (ni->GetInternalType().IsSameType(bhkAabbPhantom::TYPE)) delegate.visit((bhkAabbPhantom)in);return;
	if (ni->GetInternalType().IsSameType(BSFrustumFOVController::TYPE)) delegate.visit((BSFrustumFOVController)in);return;
	if (ni->GetInternalType().IsSameType(BSDebrisNode::TYPE)) delegate.visit((BSDebrisNode)in);return;
	if (ni->GetInternalType().IsSameType(bhkBreakableConstraint::TYPE)) delegate.visit((bhkBreakableConstraint)in);return;
	if (ni->GetInternalType().IsSameType(bhkOrientHingedBodyAction::TYPE)) delegate.visit((bhkOrientHingedBodyAction)in);return;
	if (ni->GetInternalType().IsSameType(bhkPoseArray::TYPE)) delegate.visit((bhkPoseArray)in);return;
	if (ni->GetInternalType().IsSameType(bhkRagdollTemplate::TYPE)) delegate.visit((bhkRagdollTemplate)in);return;
	if (ni->GetInternalType().IsSameType(bhkRagdollTemplateData::TYPE)) delegate.visit((bhkRagdollTemplateData)in);return;
	if (ni->GetInternalType().IsSameType(NiDataStream::TYPE)) delegate.visit((NiDataStream)in);return;
	if (ni->GetInternalType().IsSameType(NiRenderObject::TYPE)) delegate.visit((NiRenderObject)in);return;
	if (ni->GetInternalType().IsSameType(NiMeshModifier::TYPE)) delegate.visit((NiMeshModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiMesh::TYPE)) delegate.visit((NiMesh)in);return;
	if (ni->GetInternalType().IsSameType(NiMorphWeightsController::TYPE)) delegate.visit((NiMorphWeightsController)in);return;
	if (ni->GetInternalType().IsSameType(NiMorphMeshModifier::TYPE)) delegate.visit((NiMorphMeshModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiSkinningMeshModifier::TYPE)) delegate.visit((NiSkinningMeshModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiMeshHWInstance::TYPE)) delegate.visit((NiMeshHWInstance)in);return;
	if (ni->GetInternalType().IsSameType(NiInstancingMeshModifier::TYPE)) delegate.visit((NiInstancingMeshModifier)in);return;
	if (ni->GetInternalType().IsSameType(NiSkinningLODController::TYPE)) delegate.visit((NiSkinningLODController)in);return;
	if (ni->GetInternalType().IsSameType(NiPSParticleSystem::TYPE)) delegate.visit((NiPSParticleSystem)in);return;
	if (ni->GetInternalType().IsSameType(NiPSMeshParticleSystem::TYPE)) delegate.visit((NiPSMeshParticleSystem)in);return;
	if (ni->GetInternalType().IsSameType(NiPSFacingQuadGenerator::TYPE)) delegate.visit((NiPSFacingQuadGenerator)in);return;
	if (ni->GetInternalType().IsSameType(NiPSAlignedQuadGenerator::TYPE)) delegate.visit((NiPSAlignedQuadGenerator)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSimulator::TYPE)) delegate.visit((NiPSSimulator)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSimulatorStep::TYPE)) delegate.visit((NiPSSimulatorStep)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSimulatorGeneralStep::TYPE)) delegate.visit((NiPSSimulatorGeneralStep)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSimulatorForcesStep::TYPE)) delegate.visit((NiPSSimulatorForcesStep)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSimulatorCollidersStep::TYPE)) delegate.visit((NiPSSimulatorCollidersStep)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSimulatorMeshAlignStep::TYPE)) delegate.visit((NiPSSimulatorMeshAlignStep)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSimulatorFinalStep::TYPE)) delegate.visit((NiPSSimulatorFinalStep)in);return;
	if (ni->GetInternalType().IsSameType(NiPSBoundUpdater::TYPE)) delegate.visit((NiPSBoundUpdater)in);return;
	if (ni->GetInternalType().IsSameType(NiPSForce::TYPE)) delegate.visit((NiPSForce)in);return;
	if (ni->GetInternalType().IsSameType(NiPSDragForce::TYPE)) delegate.visit((NiPSDragForce)in);return;
	if (ni->GetInternalType().IsSameType(NiPSGravityForce::TYPE)) delegate.visit((NiPSGravityForce)in);return;
	if (ni->GetInternalType().IsSameType(NiPSBombForce::TYPE)) delegate.visit((NiPSBombForce)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitter::TYPE)) delegate.visit((NiPSEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSVolumeEmitter::TYPE)) delegate.visit((NiPSVolumeEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSBoxEmitter::TYPE)) delegate.visit((NiPSBoxEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSphereEmitter::TYPE)) delegate.visit((NiPSSphereEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSCylinderEmitter::TYPE)) delegate.visit((NiPSCylinderEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSMeshEmitter::TYPE)) delegate.visit((NiPSMeshEmitter)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterCtlr::TYPE)) delegate.visit((NiPSEmitterCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterFloatCtlr::TYPE)) delegate.visit((NiPSEmitterFloatCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitParticlesCtlr::TYPE)) delegate.visit((NiPSEmitParticlesCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSForceCtlr::TYPE)) delegate.visit((NiPSForceCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSForceBoolCtlr::TYPE)) delegate.visit((NiPSForceBoolCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSForceFloatCtlr::TYPE)) delegate.visit((NiPSForceFloatCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSForceActiveCtlr::TYPE)) delegate.visit((NiPSForceActiveCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSGravityStrengthCtlr::TYPE)) delegate.visit((NiPSGravityStrengthCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterSpeedCtlr::TYPE)) delegate.visit((NiPSEmitterSpeedCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterRadiusCtlr::TYPE)) delegate.visit((NiPSEmitterRadiusCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterDeclinationCtlr::TYPE)) delegate.visit((NiPSEmitterDeclinationCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterDeclinationVarCtlr::TYPE)) delegate.visit((NiPSEmitterDeclinationVarCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterPlanarAngleCtlr::TYPE)) delegate.visit((NiPSEmitterPlanarAngleCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterPlanarAngleVarCtlr::TYPE)) delegate.visit((NiPSEmitterPlanarAngleVarCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterRotAngleCtlr::TYPE)) delegate.visit((NiPSEmitterRotAngleCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterRotAngleVarCtlr::TYPE)) delegate.visit((NiPSEmitterRotAngleVarCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterRotSpeedCtlr::TYPE)) delegate.visit((NiPSEmitterRotSpeedCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterRotSpeedVarCtlr::TYPE)) delegate.visit((NiPSEmitterRotSpeedVarCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSEmitterLifeSpanCtlr::TYPE)) delegate.visit((NiPSEmitterLifeSpanCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSResetOnLoopCtlr::TYPE)) delegate.visit((NiPSResetOnLoopCtlr)in);return;
	if (ni->GetInternalType().IsSameType(NiPSCollider::TYPE)) delegate.visit((NiPSCollider)in);return;
	if (ni->GetInternalType().IsSameType(NiPSPlanarCollider::TYPE)) delegate.visit((NiPSPlanarCollider)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSphericalCollider::TYPE)) delegate.visit((NiPSSphericalCollider)in);return;
	if (ni->GetInternalType().IsSameType(NiPSSpawner::TYPE)) delegate.visit((NiPSSpawner)in);return;
	if (ni->GetInternalType().IsSameType(NiSequenceData::TYPE)) delegate.visit((NiSequenceData)in);return;
	if (ni->GetInternalType().IsSameType(NiTransformEvaluator::TYPE)) delegate.visit((NiTransformEvaluator)in);return;
	if (ni->GetInternalType().IsSameType(NiBSplineCompTransformEvaluator::TYPE)) delegate.visit((NiBSplineCompTransformEvaluator)in);return;
	if (ni->GetInternalType().IsSameType(NiShadowGenerator::TYPE)) delegate.visit((NiShadowGenerator)in);return;
	if (ni->GetInternalType().IsSameType(NiFurSpringController::TYPE)) delegate.visit((NiFurSpringController)in);return;
	if (ni->GetInternalType().IsSameType(CStreamableAssetData::TYPE)) delegate.visit((CStreamableAssetData)in);return;
	if (ni->GetInternalType().IsSameType(bhkCompressedMeshShape::TYPE)) delegate.visit((bhkCompressedMeshShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkCompressedMeshShapeData::TYPE)) delegate.visit((bhkCompressedMeshShapeData)in);return;
	if (ni->GetInternalType().IsSameType(BSInvMarker::TYPE)) delegate.visit((BSInvMarker)in);return;
	if (ni->GetInternalType().IsSameType(BSBoneLODExtraData::TYPE)) delegate.visit((BSBoneLODExtraData)in);return;
	if (ni->GetInternalType().IsSameType(BSBehaviorGraphExtraData::TYPE)) delegate.visit((BSBehaviorGraphExtraData)in);return;
	if (ni->GetInternalType().IsSameType(BSLagBoneController::TYPE)) delegate.visit((BSLagBoneController)in);return;
	if (ni->GetInternalType().IsSameType(BSLODTriShape::TYPE)) delegate.visit((BSLODTriShape)in);return;
	if (ni->GetInternalType().IsSameType(BSFurnitureMarkerNode::TYPE)) delegate.visit((BSFurnitureMarkerNode)in);return;
	if (ni->GetInternalType().IsSameType(BSLeafAnimNode::TYPE)) delegate.visit((BSLeafAnimNode)in);return;
	if (ni->GetInternalType().IsSameType(BSTreeNode::TYPE)) delegate.visit((BSTreeNode)in);return;
	if (ni->GetInternalType().IsSameType(BSTriShape::TYPE)) delegate.visit((BSTriShape)in);return;
	if (ni->GetInternalType().IsSameType(BSMeshLODTriShape::TYPE)) delegate.visit((BSMeshLODTriShape)in);return;
	if (ni->GetInternalType().IsSameType(BSSubIndexTriShape::TYPE)) delegate.visit((BSSubIndexTriShape)in);return;
	if (ni->GetInternalType().IsSameType(bhkSystem::TYPE)) delegate.visit((bhkSystem)in);return;
	if (ni->GetInternalType().IsSameType(bhkNPCollisionObject::TYPE)) delegate.visit((bhkNPCollisionObject)in);return;
	if (ni->GetInternalType().IsSameType(bhkPhysicsSystem::TYPE)) delegate.visit((bhkPhysicsSystem)in);return;
	if (ni->GetInternalType().IsSameType(bhkRagdollSystem::TYPE)) delegate.visit((bhkRagdollSystem)in);return;
	if (ni->GetInternalType().IsSameType(BSExtraData::TYPE)) delegate.visit((BSExtraData)in);return;
	if (ni->GetInternalType().IsSameType(BSClothExtraData::TYPE)) delegate.visit((BSClothExtraData)in);return;
	if (ni->GetInternalType().IsSameType(BSSkin__Instance::TYPE)) delegate.visit((BSSkin__Instance)in);return;
	if (ni->GetInternalType().IsSameType(BSSkin__BoneData::TYPE)) delegate.visit((BSSkin__BoneData)in);return;
	if (ni->GetInternalType().IsSameType(BSPositionData::TYPE)) delegate.visit((BSPositionData)in);return;
	if (ni->GetInternalType().IsSameType(BSConnectPoint__Parents::TYPE)) delegate.visit((BSConnectPoint__Parents)in);return;
	if (ni->GetInternalType().IsSameType(BSConnectPoint__Children::TYPE)) delegate.visit((BSConnectPoint__Children)in);return;
	if (ni->GetInternalType().IsSameType(BSEyeCenterExtraData::TYPE)) delegate.visit((BSEyeCenterExtraData)in);return;
	if (ni->GetInternalType().IsSameType(BSPackedCombinedSharedGeomDataExtra::TYPE)) delegate.visit((BSPackedCombinedSharedGeomDataExtra)in);return;
	if (ni->GetInternalType().IsSameType(NiLightRadiusController::TYPE)) delegate.visit((NiLightRadiusController)in);return;
	if (ni->GetInternalType().IsSameType(BSDynamicTriShape::TYPE)) delegate.visit((BSDynamicTriShape)in);return;
	if (ni->GetInternalType().IsSameType(BSDistantObjectLargeRefExtraData::TYPE)) delegate.visit((BSDistantObjectLargeRefExtraData)in);return;
}
