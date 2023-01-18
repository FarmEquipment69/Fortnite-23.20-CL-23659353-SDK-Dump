// BlueprintGeneratedClass /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C
// Size: 0x6161
class ABP_PlayerPawn_Tandem_C : public ABP_PlayerPawn_NonParticipant_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x60e8 (0x8)
	class UFortWidgetComponent* NPCStatusWidget; // 0x60f0 (0x8)
	bool IsConverted; // 0x60f8 (0x1)
	unsigned char LeaderTeam; // 0x60f9 (0x1)
	unsigned char unreflected_60fa[0x6]; // 0x60fa (0x6) 
	struct FStruct_NPC_HealthInfo HealthInfo; // 0x6100 (0x20)
	bool NPCStatusWidgetHealthBarDisabled; // 0x6120 (0x1)
	unsigned char unreflected_6121[0x7]; // 0x6121 (0x7) 
	struct FScalableFloat ShowHealth; // 0x6128 (0x28)
	double NPCHealthBarHideTimeAfterDeath; // 0x6150 (0x8)
	double NPCMaxDistanceFromDamageINstigatorToDrawHealthBar; // 0x6158 (0x8)
	bool IsHealthCheatEnabled; // 0x6160 (0x1)

	/* Functions */

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.UpdatePawnHealthHUD (Has no native function)
	void UpdatePawnHealthHUD(bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncNotPreBoolReturnValue2, bool& CallFuncIsValidReturnValue, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue, class UNPCStatusWidget_AIBoss_C*& K2NodeDynamicCastAsNPCStatusWidgetAIBoss, bool& K2NodeDynamicCastbSuccess, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue, class AFortPlayerController*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, class APawn*& CallFuncK2GetPawnReturnValue, int& TempintLoopCounterVariable, double& CallFuncGetDistanceBetweenActorsDistance, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanANDReturnValue2, int& CallFuncAddIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.OnRep_HealthInfo (Has no native function)
	void OnRepHealthInfo(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.HandlePawnUnconverted (Has no native function)
	void HandlePawnUnconverted(class AFortPawn*& UnconvertedPawn); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.HandlePawnConverted (Has no native function)
	void HandlePawnConverted(class AFortPawn*& InstigatorPawn, class AFortPawn*& ConvertedPawn, unsigned char& CallFuncGetActorTeamReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.UpdateConvertIndicator (Has no native function)
	void UpdateConvertIndicator(bool& CallFuncHasAuthorityReturnValue, class AFortPlayerController*& CallFuncGetFirstLocalFortPlayerControllerReturnValue, unsigned char& CallFuncGetActorTeamReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.StartHealthBar (Has no native function)
	void StartHealthBar(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.StartUpdatingHealthWidget (Has no native function)
	void StartUpdatingHealthWidget(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.StopUpdatingHealthWidget (Has no native function)
	void StopUpdatingHealthWidget(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.PawnHealthChanged (Has no native function)
	void PawnHealthChanged(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.NPCSetupHealthBarOnDeath (Has no native function)
	void NPCSetupHealthBarOnDeath(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.WidgetVisibilityChanged (Has no native function)
	void WidgetVisibilityChanged(bool& bVisible); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.NPCTandemDisableHealthBar (Has no native function)
	void NPCTandemDisableHealthBar(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.NPCTandemEnableHealthBars (Has no native function)
	void NPCTandemEnableHealthBars(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.EnableHiredTandemHealthBar (Has no native function)
	void EnableHiredTandemHealthBar(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.ExecuteUbergraph_BP_PlayerPawn_Tandem (Has no native function)
	void ExecuteUbergraphBPPlayerPawnTandem(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsValidReturnValue, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue, class UNPCStatusWidget_AIBoss_C*& K2NodeDynamicCastAsNPCStatusWidgetAIBoss, bool& K2NodeDynamicCastbSuccess, float& CallFuncGetHealthReturnValue, float& CallFuncGetMaxHealthReturnValue, float& CallFuncGetShieldReturnValue, double& CallFuncSafeDivideReturnValue, float& CallFuncGetMaxShieldReturnValue, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason, double& CallFuncSafeDivideReturnValue1, struct FStruct_NPC_HealthInfo& K2NodeMakeStructStructNPCHealthInfo, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AFortPawn*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, bool& CallFuncIsValidReturnValue1, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue1, class UNPCStatusWidget_AIBoss_C*& K2NodeDynamicCastAsNPCStatusWidgetAIBoss1, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsVisibleReturnValue, bool& CallFuncIsValidReturnValue2, bool& K2NodeCustomEventbVisible, bool& CallFuncIsValidReturnValue3, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue2, class UNPCStatusWidget_AIBoss_C*& K2NodeDynamicCastAsNPCStatusWidgetAIBoss2, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncGetValueAsBoolReturnValue, bool& CallFuncGetValueAsBoolReturnValue1, bool& CallFuncGetValueAsBoolReturnValue2, bool& CallFuncIsValidReturnValue4, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue3, class UNPCStatusWidget_AIBoss_C*& K2NodeDynamicCastAsNPCStatusWidgetAIBoss3, bool& K2NodeDynamicCastbSuccess3, double& CallFuncSafeDivideAImplicitCast, double& CallFuncSafeDivideBImplicitCast, double& K2NodeMakeStructMaxHealth67D7BEF7841B13FB96D2578989CF135BBImplicitCast, double& CallFuncSafeDivideAImplicitCast1, double& CallFuncSafeDivideBImplicitCast1, double& K2NodeMakeStructMaxShield9F923E4444E2E476C56FB0E9D9D2F7846ImplicitCast, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

