// ScriptStruct /Script/FortniteGame.FortVerbMessage_DamageTaken
// Size: 0xc8
struct FFortVerbMessage_DamageTaken : FVerbMessage
{
	int Damage; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	double Distance; // 0x70 (0x8)
	struct FSubjectTagsPair DamageSource; // 0x78 (0x28)
	struct FSubjectTagsPair DamageType; // 0xa0 (0x28)
};

