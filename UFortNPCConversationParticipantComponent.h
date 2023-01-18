// Class /Script/FortniteGame.FortNPCConversationParticipantComponent
// Size: 0x508
class UFortNPCConversationParticipantComponent : public UFortNonPlayerConversationParticipantComponent
{
	bool bCanStartConversation; // 0x488 (0x1)
	bool bConversationModeActive; // 0x489 (0x1)
	unsigned char unreflected_48a[0x6]; // 0x48a (0x6) 
	class AFortPlayerPawn* PlayerPawnOwner; // 0x490 (0x8)
	class AFortAthenaAIBotController* BotControllerOwner; // 0x498 (0x8)
	class UFortGameStateComponent_AffiliationManager* AffiliationManager; // 0x4a0 (0x8)
	class UFortAthenaAIRuntimeParameters_Conversation* ConversationRuntimeParameters; // 0x4a8 (0x8)
	struct FName ConversationInteractionCollisionProfile; // 0x4b0 (0x4)
	unsigned char unreflected_4b4[0x4]; // 0x4b4 (0x4) 
	struct FVector ConversationInteractionBoxExtent; // 0x4b8 (0x18)
	struct FVector ConversationInteractionBoxOffset; // 0x4d0 (0x18)
	class UBoxComponent* InteractCollisionComponent; // 0x4e8 (0x8)
	class UFortTandemCharacterData* CharacterData; // 0x4f0 (0x8)
	class UClass* NPCAnimLayer; // 0x4f8 (0x8)
	bool bTriggerGiftOnFirstConversationEnabled; // 0x500 (0x1)
	bool bCanConverseWhenConverted; // 0x501 (0x1)
	unsigned char padding_502[0x6]; // 0x502 (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortNPCConversationParticipantComponent.OnRep_ConversationModeActive (Underlying native function: OnRep_ConversationModeActive 0x872601c)
	void OnRepConversationModeActive(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortNPCConversationParticipantComponent.OnRep_CanStartConversation (Underlying native function: OnRep_CanStartConversation 0x1458f9c)
	void OnRepCanStartConversation(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortNPCConversationParticipantComponent.OnPlayerPawnOwnerDied (Underlying native function: OnPlayerPawnOwnerDied 0x8725de8)
	void OnPlayerPawnOwnerDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortNPCConversationParticipantComponent.OnBotControllerDBNOStatusChanged (Underlying native function: OnBotControllerDBNOStatusChanged 0x8725d30)
	void OnBotControllerDBNOStatusChanged(class AFortAthenaAIBotController*& BotController, bool& bIsDBNO); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortNPCConversationParticipantComponent.OnBotControllerAlertLevelChanged (Underlying native function: OnBotControllerAlertLevelChanged 0x8725c38)
	void OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController*& BotController, enum EAlertLevel& OldAlertLevel, enum EAlertLevel& NewAlertLevel); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortNPCConversationParticipantComponent.GetCharacterData (Underlying native function: GetCharacterData 0x8725998)
	class UFortTandemCharacterData* GetCharacterData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

