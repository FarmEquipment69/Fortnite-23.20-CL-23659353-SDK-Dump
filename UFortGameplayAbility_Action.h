// Class /Script/FortniteGame.FortGameplayAbility_Action
// Size: 0xb50
class UFortGameplayAbility_Action : public UFortGameplayAbility
{
	struct FName ActionName; // 0xb20 (0x4)
	unsigned char unreflected_b24[0x4]; // 0xb24 (0x4) 
	struct TArray<struct FName> ExtraActionNames; // 0xb28 (0x10)
	bool bActivateOnInputPress; // 0xb38 (0x1)
	unsigned char padding_b39[0x17]; // 0xb39 (0x17)
};

