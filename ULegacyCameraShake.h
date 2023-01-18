// Class /Script/GameplayCameras.LegacyCameraShake
// Size: 0x210
class ULegacyCameraShake : public UCameraShakeBase
{
	float OscillationDuration; // 0xe8 (0x4)
	float OscillationBlendInTime; // 0xec (0x4)
	float OscillationBlendOutTime; // 0xf0 (0x4)
	struct FROscillator RotOscillation; // 0xf4 (0x24)
	struct FVOscillator LocOscillation; // 0x118 (0x24)
	struct FFOscillator FOVOscillation; // 0x13c (0xc)
	float AnimPlayRate; // 0x148 (0x4)
	float AnimScale; // 0x14c (0x4)
	float AnimBlendInTime; // 0x150 (0x4)
	float AnimBlendOutTime; // 0x154 (0x4)
	float RandomAnimSegmentDuration; // 0x158 (0x4)
	unsigned char unreflected_15c[0x4]; // 0x15c (0x4) 
	class UCameraAnimationSequence* AnimSequence; // 0x160 (0x8)
	unsigned char bRandomAnimSegment; // 0x168 (0x1)
	unsigned char unreflected_169[0x3]; // 0x169 (0x3) 
	float OscillatorTimeRemaining; // 0x16c (0x4)
	unsigned char unreflected_170[0x70]; // 0x170 (0x70) 
	class USequenceCameraShakePattern* SequenceShakePattern; // 0x1e0 (0x8)
	unsigned char padding_1e8[0x28]; // 0x1e8 (0x28)

	/* Functions */

	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource (Underlying native function: StartLegacyCameraShakeFromSource 0x71eb550)
	static class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager*& PlayerCameraManager, class UClass*& ShakeClass, class UCameraShakeSourceComponent*& SourceComponent, float& Scale, enum ECameraShakePlaySpace& Playspace, struct FRotator& UserPlaySpaceRot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShake (Underlying native function: StartLegacyCameraShake 0x71eb3a4)
	static class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager*& PlayerCameraManager, class UClass*& ShakeClass, float& Scale, enum ECameraShakePlaySpace& Playspace, struct FRotator& UserPlaySpaceRot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveStopShake (Has no native function)
	void ReceiveStopShake(bool& bImmediately); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayCameras.LegacyCameraShake.ReceivePlayShake (Has no native function)
	void ReceivePlayShake(float& Scale); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveIsFinished (Underlying native function: ReceiveIsFinished 0x2ab4d90)
	bool ReceiveIsFinished(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake (Has no native function)
	void BlueprintUpdateCameraShake(float& DeltaTime, float& Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // (Event | Public | HasOutParms | BlueprintEvent)
};

