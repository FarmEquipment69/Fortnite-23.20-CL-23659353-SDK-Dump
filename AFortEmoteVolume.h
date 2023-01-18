// Class /Script/FortniteGame.FortEmoteVolume
// Size: 0x3a0
class AFortEmoteVolume : public AVolume
{
	class UFortQuestItemDefinition* RequiredQuest; // 0x2c0 (0x8)
	struct FName RequiredObjective; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct TArray<struct FEmoteActionBinding> GrantedEmotes; // 0x2d0 (0x10)
	bool bAllowGrantingUnownedEmotes; // 0x2e0 (0x1)
	bool bUseEmoteCategory; // 0x2e1 (0x1)
	bool bDisplayExclusive; // 0x2e2 (0x1)
	unsigned char unreflected_2e3[0x1]; // 0x2e3 (0x1) 
	struct FName EmoteCategoryName; // 0x2e4 (0x4)
	struct FText EmoteCategoryTitle; // 0x2e8 (0x18)
	struct TSet<class AFortPlayerController*> TrackedPlayers; // 0x300 (0x50)
	struct TSet<class AFortPlayerController*> PlayersWithEmotes; // 0x350 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortEmoteVolume.WasPlayerGrantedEmotes (Underlying native function: WasPlayerGrantedEmotes 0x8352bb8)
	bool WasPlayerGrantedEmotes(class AFortPlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortEmoteVolume.IsPlayerOverlapping (Underlying native function: IsPlayerOverlapping 0x8352154)
	bool IsPlayerOverlapping(class AFortPlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortEmoteVolume.GetRequiredQuest (Underlying native function: GetRequiredQuest 0x2522aa8)
	class UFortQuestItemDefinition* GetRequiredQuest(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortEmoteVolume.GetRequiredObjectiveName (Underlying native function: GetRequiredObjectiveName 0x276de64)
	struct FName GetRequiredObjectiveName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortEmoteVolume.GetGrantedEmotes (Underlying native function: GetGrantedEmotes 0x8351be0)
	struct TArray<struct FEmoteActionBinding> GetGrantedEmotes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

