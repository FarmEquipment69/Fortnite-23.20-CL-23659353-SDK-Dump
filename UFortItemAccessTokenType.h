// Class /Script/FortniteGame.FortItemAccessTokenType
// Size: 0x448
class UFortItemAccessTokenType : public UFortAccountItemDefinition
{
	enum EItemProfileType ProfileType; // 0x420 (0x1)
	unsigned char unreflected_421[0x7]; // 0x421 (0x7) 
	class UFortItemDefinition* accessitem; // 0x428 (0x8)
	struct FText UnlockDescription; // 0x430 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortItemAccessTokenType.GetUnlockDescription (Underlying native function: GetUnlockDescription 0x8a64788)
	struct FText GetUnlockDescription(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemAccessTokenType.GetAccessItem (Underlying native function: GetAccessItem 0x7a9d0a8)
	class UFortItemDefinition* GetAccessItem(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

