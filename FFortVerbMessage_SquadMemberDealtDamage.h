// ScriptStruct /Script/FortniteGame.FortVerbMessage_SquadMemberDealtDamage
// Size: 0xe8
struct FFortVerbMessage_SquadMemberDealtDamage : FVerbMessage
{
	int Damage; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FSubjectTagsPair SquadMember; // 0x70 (0x28)
	struct FSubjectTagsPair DamagedTargetInfo; // 0x98 (0x28)
	struct FSubjectTagsPair DamageSourceInfo; // 0xc0 (0x28)
};

