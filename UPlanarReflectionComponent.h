// Class /Script/Engine.PlanarReflectionComponent
// Size: 0x4c0
class UPlanarReflectionComponent : public USceneCaptureComponent
{
	class UBoxComponent* PreviewBox; // 0x358 (0x8)
	float NormalDistortionStrength; // 0x360 (0x4)
	float PrefilterRoughness; // 0x364 (0x4)
	float PrefilterRoughnessDistance; // 0x368 (0x4)
	int ScreenPercentage; // 0x36c (0x4)
	float ExtraFOV; // 0x370 (0x4)
	float DistanceFromPlaneFadeStart; // 0x374 (0x4)
	float DistanceFromPlaneFadeEnd; // 0x378 (0x4)
	float DistanceFromPlaneFadeoutStart; // 0x37c (0x4)
	float DistanceFromPlaneFadeoutEnd; // 0x380 (0x4)
	float AngleFromPlaneFadeStart; // 0x384 (0x4)
	float AngleFromPlaneFadeEnd; // 0x388 (0x4)
	bool bShowPreviewPlane; // 0x38c (0x1)
	bool bRenderSceneTwoSided; // 0x38d (0x1)
	unsigned char padding_38e[0x132]; // 0x38e (0x132)
};

