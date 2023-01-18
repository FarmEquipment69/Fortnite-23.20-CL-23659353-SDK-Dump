// ScriptStruct /Script/FortniteAI.StormWind
// Size: 0x68
struct FStormWind : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector Location; // 0x10 (0x18)
	struct FVector Direction; // 0x28 (0x18)
	float Radius; // 0x40 (0x4)
	float Magnitude; // 0x44 (0x4)
	class AFortThreatVisualsManager* ThreatVisualsManager; // 0x48 (0x8)
	struct TArray<class UFortAIEncounterInfo*> Encounters; // 0x50 (0x10)
	struct FFortWindImpulseHandle WindHandle; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

