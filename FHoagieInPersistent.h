// ScriptStruct /Script/HoagieRuntime.HoagieInPersistent
// Size: 0x1c8
struct FHoagieInPersistent : FFortVehicleInPersistent
{
	class UFortHoagieVehicleConfigs* FortHoagieVehicleConfigs; // 0x188 (0x8)
	enum EHoagieState CurrentHoagieState; // 0x190 (0x4)
	float LastRotorImpulseTime; // 0x194 (0x4)
	struct FVector RotorHitLinearImpulse; // 0x198 (0x18)
	struct FVector RotorHitAngularImpulse; // 0x1b0 (0x18)
};

