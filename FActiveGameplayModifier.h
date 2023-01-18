// ScriptStruct /Script/FortniteGame.ActiveGameplayModifier
// Size: 0xd8
struct FActiveGameplayModifier : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UFortGameplayModifierItemDefinition* ModifierDef; // 0x10 (0x8)
	struct FActiveGameplayModifierHandle ModifierHandle; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<class AFortGameplayMutator*> Mutators; // 0x20 (0x10)
	int Expiration; // 0x30 (0x4)
	unsigned char padding_34[0xa4]; // 0x34 (0xa4)
};

