// Class /Script/FortniteGame.FortIndicatedActorManagementLibrary
// Size: 0x28
class UFortIndicatedActorManagementLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.RemoveGroupFromStenciledList (Underlying native function: RemoveGroupFromStenciledList 0x8946128)
	static void RemoveGroupFromStenciledList(class AController*& InstigatingController, struct FString& GroupIdentifier, bool& bIncludeSquad); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.RemoveGroupFromIndicatedList (Underlying native function: RemoveGroupFromIndicatedList 0x8946128)
	static void RemoveGroupFromIndicatedList(class AController*& InstigatingController, struct FString& GroupIdentifier, bool& bIncludeSquad); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.RemoveActorFromStenciledList (Underlying native function: RemoveActorFromStenciledList 0x86ea374)
	static void RemoveActorFromStenciledList(class AController*& InstigatingController, class AActor*& StenciledActor, bool& bIncludeSquad); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.RemoveActorFromIndicatedList (Underlying native function: RemoveActorFromIndicatedList 0x86ea374)
	static void RemoveActorFromIndicatedList(class AController*& InstigatingController, class AActor*& IndicatedActor, bool& bIncludeSquad); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.MakeStenciledActorData (Underlying native function: MakeStenciledActorData 0x894244c)
	static struct FStenciledActorData MakeStenciledActorData(struct FString& GroupIdentifier, struct FIndicatedActorParticleSystemData& ParticleSystemData, float& Duration, float& StepTime, enum EShareActorWith& ShareActorWith, class USoundBase*& sound, struct FName& FriendlyStencilName, struct FName& EnemyStencilName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.MakeIndicatedActorScaleAndOpacityData (Underlying native function: MakeIndicatedActorScaleAndOpacityData 0x894222c)
	static struct FIndicatedActorScaleAndOpacityData MakeIndicatedActorScaleAndOpacityData(float& SmallSizeDistance, float& LargestSizeDistance, float& SmallScale, float& LargestScale, float& FarAwayScale, float& FarAwayOpacity, float& MaxScaleAndFadePercent); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.MakeIndicatedActorParticleSystemData (Underlying native function: MakeIndicatedActorParticleSystemData 0x8942074)
	static struct FIndicatedActorParticleSystemData MakeIndicatedActorParticleSystemData(class UParticleSystem*& ParticleSystem, struct FName& ActorParamName, struct FVector& Offset, struct FVector& DBNOOffset, struct FName& VectorParamName); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.MakeIndicatedActorDataWithFilter (Underlying native function: MakeIndicatedActorDataWithFilter 0x8941bf8)
	static struct FIndicatedActorDataWithFilter MakeIndicatedActorDataWithFilter(struct FGameplayTagContainer& IndicateActorTags, struct FGameplayTagQuery& IndicatedActorTagQuery, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, struct TWeakObjectPtr<class UClass>& ActorClassFilter, struct TArray<struct TEnumAsByte<EFortTeamAffiliation>>& InAffiliations, struct FIndicatedActorData& IndicatedActorData, struct FStenciledActorData& StenciledActorData, float& OverlapRadius, float& OverlapHalfHeight); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.MakeIndicatedActorData (Underlying native function: MakeIndicatedActorData 0x89416d4)
	static struct FIndicatedActorData MakeIndicatedActorData(struct FString& GroupIdentifier, struct FIndicatedActorScaleAndOpacityData& ScaleAndOpacityData, struct FIndicatedActorParticleSystemData& ParticleSystemData, float& Duration, float& StepTime, struct FVector& IndicatorOffset, struct FVector& IndicatorDBNOOffset, enum EShareActorWith& ShareActorWith, bool& bClampToScreen, class USoundBase*& sound, enum EIndicatorStateImage& StateImageOverride); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.AddActorsToStenciledList (Underlying native function: AddActorsToStenciledList 0x892ae40)
	static void AddActorsToStenciledList(class AController*& InstigatingController, struct TArray<class AActor*>& StenciledActors, struct FStenciledActorData& StenciledActorData, bool& bAddAsUnique, bool& bReplaceExistingEntry, bool& bRefreshExistingEntry); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.AddActorsToIndicatedListWithFilter (Underlying native function: AddActorsToIndicatedListWithFilter 0x892ab8c)
	static void AddActorsToIndicatedListWithFilter(class AController*& InstigatingController, struct TArray<class AActor*>& ActorsToFilter, struct TArray<struct FIndicatedActorDataWithFilter>& IndicatedActorFilterDatas, bool& bAddAsUnique, bool& bReplaceExistingEntry, bool& bRefreshExistingEntry, class AActor*& InstigatingActorOverride, bool& bPerformRadiusCheck); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.AddActorsToIndicatedList (Underlying native function: AddActorsToIndicatedList 0x892a918)
	static void AddActorsToIndicatedList(class AController*& InstigatingController, struct TArray<class AActor*>& IndicatedActors, struct FIndicatedActorData& IndicatedActorData, bool& bAddAsUnique, bool& bAllowOwningPlayer, bool& bReplaceExistingEntry, bool& bRefreshExistingEntry); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.AddActorsInRadiusToStenciledList (Underlying native function: AddActorsInRadiusToStenciledList 0x892a728)
	static void AddActorsInRadiusToStenciledList(class AController*& InstigatingController, struct TArray<struct FIndicatedActorDataWithFilter>& StenciledActorFilterDatas, bool& bAddAsUnique, bool& bReplaceExistingEntry, bool& bRefreshExistingEntry, class AActor*& InstigatingActorOverride); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortIndicatedActorManagementLibrary.AddActorsInRadiusToIndicatedList (Underlying native function: AddActorsInRadiusToIndicatedList 0x892a728)
	static void AddActorsInRadiusToIndicatedList(class AController*& InstigatingController, struct TArray<struct FIndicatedActorDataWithFilter>& IndicatedActorFilterDatas, bool& bAddAsUnique, bool& bReplaceExistingEntry, bool& bRefreshExistingEntry, class AActor*& InstigatingActorOverride); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)
};

