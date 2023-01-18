// ScriptStruct /Script/FortniteGame.AntelopeInPersistent
// Size: 0x1d0
struct FAntelopeInPersistent : FFortVehicleInPersistent
{
	class UFortAntelopeVehicleConfigs* FortAntelopeVehicleConfigs; // 0x188 (0x8)
	bool bIsBoosting; // 0x190 (0x1)
	enum ENaturalSlideState NaturalSlideState; // 0x191 (0x1)
	unsigned char unreflected_192[0x2]; // 0x192 (0x2) 
	float PushForceCurrentMultiplier; // 0x194 (0x4)
	struct FVector BackLeanSocketPosition; // 0x198 (0x18)
	float LeanImpulseScaleBack; // 0x1b0 (0x4)
	float BounceForceBack; // 0x1b4 (0x4)
	struct FVector BounceOffsetBack; // 0x1b8 (0x18)
};

