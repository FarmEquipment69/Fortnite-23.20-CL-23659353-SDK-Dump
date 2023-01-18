// Class /Script/FortniteGame.FortContextualTutorial_Fly
// Size: 0xf8
class UFortContextualTutorial_Fly : public UFortContextualTutorial
{

	/* Functions */

	// Function /Script/FortniteGame.FortContextualTutorial_Fly.OnMovementModeChange (Underlying native function: OnMovementModeChange 0x856e564)
	void OnMovementModeChange(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortContextualTutorial_Fly.HandleStartSkydivingForActivation (Underlying native function: HandleStartSkydivingForActivation 0x856dba4)
	void HandleStartSkydivingForActivation(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortContextualTutorial_Fly.HandlePawnLanded (Underlying native function: HandlePawnLanded 0x856d8c4)
	void HandlePawnLanded(struct FHitResult& Hit); // (Final | Native | Private | HasOutParms)
};

