// Class /Script/FortniteGame.FortItemPreviewMultiAngleActor
// Size: 0x4a0
class AFortItemPreviewMultiAngleActor : public AFortItemPreviewActor
{
	class USceneComponent* CameraRotationRootComponent; // 0x3b0 (0x8)
	class UCameraComponent* PrimaryCameraComponent; // 0x3b8 (0x8)
	class UMaterialInstance* AutotestFloorMaterial; // 0x3c0 (0x8)
	float AngleTransitionDuration; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0x4]; // 0x3cc (0x4) 
	class UCurveFloat* AngleTransitionCurve; // 0x3d0 (0x8)
	class UCameraComponent* ActiveCameraAngle; // 0x3d8 (0x8)
	unsigned char padding_3e0[0xc0]; // 0x3e0 (0xc0)

	/* Functions */

	// Function /Script/FortniteGame.FortItemPreviewMultiAngleActor.OnUpdateFloorMaterial (Has no native function)
	void OnUpdateFloorMaterial(bool& bEnableAutotestBackground); // (Event | Protected | BlueprintEvent)
};

