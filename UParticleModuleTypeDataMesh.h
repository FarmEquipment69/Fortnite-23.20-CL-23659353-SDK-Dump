// Class /Script/Engine.ParticleModuleTypeDataMesh
// Size: 0xb0
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
	class UStaticMesh* Mesh; // 0x30 (0x8)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	float LODSizeScale; // 0x40 (0x4)
	unsigned char bUseStaticMeshLODs; // 0x44 (0x1)
	unsigned char CastShadows; // 0x44 (0x1)
	unsigned char DoCollisions; // 0x44 (0x1)
	struct TEnumAsByte<EMeshScreenAlignment> MeshAlignment; // 0x45 (0x1)
	unsigned char bOverrideMaterial; // 0x46 (0x1)
	unsigned char bOverrideDefaultMotionBlurSettings; // 0x46 (0x1)
	unsigned char bEnableMotionBlur; // 0x46 (0x1)
	unsigned char unreflected_47[0x1]; // 0x47 (0x1) 
	struct FRawDistributionVector RollPitchYawRange; // 0x48 (0x60)
	struct TEnumAsByte<EParticleAxisLock> AxisLockOption; // 0xa8 (0x1)
	unsigned char bCameraFacing; // 0xa9 (0x1)
	struct TEnumAsByte<EMeshCameraFacingUpAxis> CameraFacingUpAxisOption; // 0xaa (0x1)
	struct TEnumAsByte<EMeshCameraFacingOptions> CameraFacingOption; // 0xab (0x1)
	unsigned char bApplyParticleRotationAsSpin; // 0xac (0x1)
	unsigned char bFaceCameraDirectionRatherThanPosition; // 0xac (0x1)
	unsigned char bCollisionsConsiderPartilceSize; // 0xac (0x1)
	unsigned char padding_ad[0x3]; // 0xad (0x3)
};

