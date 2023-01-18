// ScriptStruct /Script/FortniteGame.GoaFInPersistent
// Size: 0x258
struct FGoaFInPersistent : FFortVehicleInPersistent
{
	class UFortGoatVehicleConfigs* FortGoatVehicleConfigs; // 0x188 (0x8)
	enum EPowerSlideState PowerSlideState; // 0x190 (0x1)
	unsigned char unreflected_191[0x3]; // 0x191 (0x3) 
	float AccumulatedPowerSlideBoostDiscrete; // 0x194 (0x4)
	float PushForceCurrentMultiplier; // 0x198 (0x4)
	float AngularSpeedEnterPowerSlide; // 0x19c (0x4)
	struct FVector LeanSocketPositionFR; // 0x1a0 (0x18)
	float LeanImpulseScaleFR; // 0x1b8 (0x4)
	unsigned char unreflected_1bc[0x4]; // 0x1bc (0x4) 
	struct FVector LeanSocketPositionBR; // 0x1c0 (0x18)
	float LeanImpulseScaleBR; // 0x1d8 (0x4)
	unsigned char unreflected_1dc[0x4]; // 0x1dc (0x4) 
	struct FVector LeanSocketPositionBL; // 0x1e0 (0x18)
	float LeanImpulseScaleBL; // 0x1f8 (0x4)
	float BounceForceFR; // 0x1fc (0x4)
	struct FVector BounceOffsetFR; // 0x200 (0x18)
	float BounceForceBR; // 0x218 (0x4)
	unsigned char unreflected_21c[0x4]; // 0x21c (0x4) 
	struct FVector BounceOffsetBR; // 0x220 (0x18)
	float BounceForceBL; // 0x238 (0x4)
	unsigned char unreflected_23c[0x4]; // 0x23c (0x4) 
	struct FVector BounceOffsetBL; // 0x240 (0x18)
};

