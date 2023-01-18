// BlueprintGeneratedClass /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C
// Size: 0x3d98
class ANPC_Pawn_Irwin_Prey_Nug_Loot_C : public ANPC_Pawn_Irwin_Prey_Nug_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3d80 (0x8)
	class UAudioComponent* LootGlowAudioLoop; // 0x3d88 (0x8)
	class UNiagaraComponent* LootGlow; // 0x3d90 (0x8)

	/* Functions */

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.GetLootGlowColorFromRarity (Has no native function)
	void GetLootGlowColorFromRarity(enum EFortRarity& Rarity, struct FLinearColor& Color, struct FName& TempnameVariable, struct FName& TempnameVariable1, struct FName& TempnameVariable2, struct FName& TempnameVariable3, struct FName& TempnameVariable4, struct FName& TempnameVariable5, struct FName& TempnameVariable6, struct FName& TempnameVariable7, enum EFortRarity& TempbyteVariable, struct FName& K2NodeSelectDefault, struct FLootGlowColor& CallFuncGetDataTableRowFromNameOutRow, bool& CallFuncGetDataTableRowFromNameReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.NPC SendGameplayCuePickupGrabbed (Has no native function)
	void NPCSendGameplayCuePickupGrabbed(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.MeshLoaded (Has no native function)
	void MeshLoaded(class AFortPawn*& ThisPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug_Loot (Has no native function)
	void ExecuteUbergraphNPCPawnIrwinPreyNugLoot(int& EntryPoint, class AFortPawn*& K2NodeCustomEventThisPawn, double& TemprealVariable, double& TemprealVariable1, double& TemprealVariable2, double& TemprealVariable3, double& TemprealVariable4, double& TemprealVariable5, struct FCurveTableRowHandle& K2NodeMakeStructCurveTableRowHandle, struct FScalableFloat& K2NodeMakeStructScalableFloat, float& CallFuncGetValueAtLevelReturnValue, bool& CallFuncGreaterEqualByteByteReturnValue, struct FLinearColor& CallFuncGetLootGlowColorFromRarityColor, struct FLinearColor& CallFuncSelectColorReturnValue, struct FVector& CallFuncConvLinearColorToVectorReturnValue, double& TemprealVariable6, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsDedicatedServerReturnValue, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AFortPawn*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, bool& CallFuncIsValidReturnValue, bool& CallFuncIsPlayingReturnValue, enum EFortRarity& TempbyteVariable, double& TemprealVariable7, double& K2NodeSelectDefault, float& CallFuncSetFloatParameterParamImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

