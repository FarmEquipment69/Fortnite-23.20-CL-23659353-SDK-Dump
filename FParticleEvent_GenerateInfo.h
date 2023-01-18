// ScriptStruct /Script/Engine.ParticleEvent_GenerateInfo
// Size: 0x28
struct FParticleEvent_GenerateInfo
{
	struct TEnumAsByte<EParticleEventType> Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int Frequency; // 0x4 (0x4)
	int ParticleFrequency; // 0x8 (0x4)
	unsigned char FirstTimeOnly; // 0xc (0x1)
	unsigned char LastTimeOnly; // 0xc (0x1)
	unsigned char UseReflectedImpactVector; // 0xc (0x1)
	unsigned char bUseOrbitOffset; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FName CustomName; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<class UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18 (0x10)
};

