// Class /Script/FortniteGame.FortPawnComponent_Convert
// Size: 0x298
class UFortPawnComponent_Convert : public UFortPawnComponent
{
	struct FScalableFloat CanConvert; // 0xa0 (0x28)
	struct FScalableFloat CanBeConverted; // 0xc8 (0x28)
	struct FScalableFloat CanBeConvertedFromDBNO; // 0xf0 (0x28)
	struct FScalableFloat MaxConvertedNPC; // 0x118 (0x28)
	struct FScalableFloat MaxConvertedCreature; // 0x140 (0x28)
	struct FScalableFloat ConvertTimeFromDBNO; // 0x168 (0x28)
	class USoundBase* ConvertInteractionSound; // 0x190 (0x8)
	class UClass* IndicatorMarkerWidgetClass; // 0x198 (0x8)
	struct FMulticastInlineDelegate OnConvertedEvent; // 0x1a0 (0x10)
	struct FMulticastInlineDelegate OnUnconvertedEvent; // 0x1b0 (0x10)
	struct FMulticastInlineDelegate OnConvertEvent; // 0x1c0 (0x10)
	struct FMulticastInlineDelegate OnUnconvertEvent; // 0x1d0 (0x10)
	struct FMulticastInlineDelegate OnShowConvertedIndicator; // 0x1e0 (0x10)
	struct FMulticastInlineDelegate OnHideConvertedIndicator; // 0x1f0 (0x10)
	struct FMulticastInlineDelegate OnPingCommandEvent; // 0x200 (0x10)
	unsigned char bCanConvert; // 0x210 (0x1)
	unsigned char bCanBeConverted; // 0x210 (0x1)
	unsigned char bCanBeConvertedFromDBNO; // 0x210 (0x1)
	unsigned char bCanShowMarker; // 0x210 (0x1)
	unsigned char bShouldShowIndicatorMarker; // 0x210 (0x1)
	unsigned char bOwnerPawnDied; // 0x210 (0x1)
	unsigned char unreflected_211[0x3]; // 0x211 (0x3) 
	struct FConverterPlayerInfo ConverterPlayerInfo; // 0x214 (0xc)
	struct TWeakObjectPtr<class AFortPlayerState> PreviousConverterPlayerState; // 0x220 (0x8)
	class UFortAthenaAIRuntimeParameters_AIConvert* CachedAIConvertParameters; // 0x228 (0x8)
	struct TArray<struct FConvertedComponentInfo> ConvertedPawnComponents; // 0x230 (0x10)
	struct TArray<struct TWeakObjectPtr<class AFortPlayerState>> PreviousConverters; // 0x240 (0x10)
	enum EConvertedType ConvertedType; // 0x250 (0x1)
	unsigned char unreflected_251[0x27]; // 0x251 (0x27) 
	struct TArray<struct FTaggedConversionAbilities> ConverterSpecificAbilitiesAddedToConverted; // 0x278 (0x10)
	unsigned char unreflected_288[0xc]; // 0x288 (0xc) 
	bool bOnlyLeaderInteraction; // 0x294 (0x1)
	unsigned char padding_295[0x3]; // 0x295 (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortPawnComponent_Convert.TriggerUnconversion (Underlying native function: TriggerUnconversion 0x8703f0c)
	static void TriggerUnconversion(class AFortPawn*& Unconverter, class AFortPawn*& Unconverted); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.TriggerConversion (Underlying native function: TriggerConversion 0x8703cf4)
	static void TriggerConversion(class AFortPawn*& Converter, class AFortPawn*& Converted, bool& bCanSteal); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.ShowIndicatorMarker (Underlying native function: ShowIndicatorMarker 0x275e0ec)
	void ShowIndicatorMarker(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.SetCanBeConverted (Underlying native function: SetCanBeConverted 0x8702758)
	void SetCanBeConverted(bool& bInCanBeConverted); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.ServerRequestReleaseLastConvertedPawns (Underlying native function: ServerRequestReleaseLastConvertedPawns 0x8702638)
	void ServerRequestReleaseLastConvertedPawns(enum EConvertedType& SpecificConvertedType); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.ServerRequestReleaseAllConvertedPawns (Underlying native function: ServerRequestReleaseAllConvertedPawns 0x870259c)
	void ServerRequestReleaseAllConvertedPawns(enum EConvertedType& SpecificConvertedType); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.RemoveFromPreConversionFactions (Underlying native function: RemoveFromPreConversionFactions 0x8702428)
	void RemoveFromPreConversionFactions(struct FGameplayTag& FactionTag); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.OnRep_ConverterPlayerInfo (Underlying native function: OnRep_ConverterPlayerInfo 0x29e388c)
	void OnRepConverterPlayerInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.OnPingCommand (Underlying native function: OnPingCommand 0x75713e8)
	void OnPingCommand(enum PingCommandType& CommandType); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.OnConverterTeamChange (Underlying native function: OnConverterTeamChange 0x26daa0c)
	void OnConverterTeamChange(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.OnConverterStoppedEmote (Underlying native function: OnConverterStoppedEmote 0x870157c)
	void OnConverterStoppedEmote(class UFortItemDefinition*& MontageItemDef, class AFortPawn*& PawnEmoting); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.OnConverterStartedEmote (Underlying native function: OnConverterStartedEmote 0x87014b8)
	void OnConverterStartedEmote(class UFortItemDefinition*& MontageItemDef, class AFortPawn*& PawnEmoting); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.OnConvertedPawnDied (Underlying native function: OnConvertedPawnDied 0x87010a8)
	void OnConvertedPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.HideIndicatorMarker (Underlying native function: HideIndicatorMarker 0x275dba8)
	void HideIndicatorMarker(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.HandleControllerChanged (Underlying native function: HandleControllerChanged 0x87008c4)
	void HandleControllerChanged(class APawn*& Pawn, class AController*& OldController, class AController*& NewController); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.GetOnlyLeaderInteraction (Underlying native function: GetOnlyLeaderInteraction 0x87005a4)
	bool GetOnlyLeaderInteraction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.GetNumConvertedPawns (Underlying native function: GetNumConvertedPawns 0x8700518)
	int GetNumConvertedPawns(enum EConvertedType& SpecificConvertedType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.GetMaxConvertedNPC (Underlying native function: GetMaxConvertedNPC 0x87004e0)
	int GetMaxConvertedNPC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.GetMaxConvertedCreature (Underlying native function: GetMaxConvertedCreature 0x87004a8)
	int GetMaxConvertedCreature(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.GetConverterPawn (Underlying native function: GetConverterPawn 0x8700454)
	class AFortPlayerPawn* GetConverterPawn(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.GetConvertedType (Underlying native function: GetConvertedType 0x870043c)
	enum EConvertedType GetConvertedType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.GetConvertedPawns (Underlying native function: GetConvertedPawns 0x8700368)
	struct TArray<class AFortPawn*> GetConvertedPawns(enum EConvertedType& SpecificConvertedType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.ClientRegisterConvertPawn (Underlying native function: ClientRegisterConvertPawn 0x709e37c)
	void ClientRegisterConvertPawn(class AFortPawn*& ConvertedPawn); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.AppendConverterAbilitiesToAssignConvertedWithTags (Underlying native function: AppendConverterAbilitiesToAssignConvertedWithTags 0x86ffdf0)
	void AppendConverterAbilitiesToAssignConvertedWithTags(struct FGameplayTagQuery& TagsMatchingConverted, class UFortAbilitySet*& AbilitySetForConverted); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.AppendConverterAbilitiesToAssignConverted (Underlying native function: AppendConverterAbilitiesToAssignConverted 0x86ffd70)
	void AppendConverterAbilitiesToAssignConverted(class UFortAbilitySet*& AbilitySetForConverted); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_Convert.AddToPreConversionFactions (Underlying native function: AddToPreConversionFactions 0x86ffcc0)
	void AddToPreConversionFactions(struct FGameplayTag& FactionTag); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

