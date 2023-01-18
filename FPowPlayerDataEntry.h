// ScriptStruct /Script/FortniteGame.PowPlayerDataEntry
// Size: 0x28
struct FPowPlayerDataEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortPlayerStateAthena* PlayerState; // 0x10 (0x8)
	float CurrentMaxShield; // 0x18 (0x4)
	float CurrentShield; // 0x1c (0x4)
	class AFortAthenaMutator_Pow* POWMutator; // 0x20 (0x8)
};

