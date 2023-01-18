// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin (Underlying native function: TargetDataHasOrigin 0x6aea8b0)
	static bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult (Underlying native function: TargetDataHasHitResult 0x6aea7ac)
	static bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint (Underlying native function: TargetDataHasEndPoint 0x6aea668)
	static bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor (Underlying native function: TargetDataHasActor 0x6aea524)
	static bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax (Underlying native function: SetStackCountToMax 0x6aea0d0)
	static struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle& SpecHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount (Underlying native function: SetStackCount 0x6ae9f6c)
	static struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle& SpecHandle, int& StackCount); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration (Underlying native function: SetDuration 0x6ae9dbc)
	static struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle& SpecHandle, float& Duration); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor (Underlying native function: SendGameplayEventToActor 0x20af458)
	static void SendGameplayEventToActor(class AActor*& Actor, struct FGameplayTag& EventTag, struct FGameplayEventData& Payload); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags (Underlying native function: RemoveLooseGameplayTags 0x20af2f4)
	static bool RemoveLooseGameplayTags(class AActor*& Actor, struct FGameplayTagContainer& GameplayTags, bool& bShouldReplicate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute (Underlying native function: NotEqual_GameplayAttributeGameplayAttribute 0x6ae6ef8)
	static bool NotEqualGameplayAttributeGameplayAttribute(struct FGameplayAttribute& AttributeA, struct FGameplayAttribute& AttributeB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle (Underlying native function: NotEqual_GameplayAbilitySpecHandle 0x6ae6e1c)
	static bool NotEqualGameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle (Underlying native function: NotEqual_ActiveGameplayEffectHandle 0x6ae6d38)
	static bool NotEqualActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle*& A, struct FActiveGameplayEffectHandle*& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle (Underlying native function: MakeSpecHandle 0x6ae5bd8)
	static struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect*& InGameplayEffect, class AActor*& InInstigator, class AActor*& InEffectCauser, float& InLevel); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters (Underlying native function: MakeGameplayCueParameters 0x1734e64)
	static struct FGameplayCueParameters MakeGameplayCueParameters(float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int& GameplayEffectLevel, int& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle (Underlying native function: MakeFilterHandle 0x6ae57f8)
	static struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter& Filter, class AActor*& FilterActor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid (Underlying native function: IsValid 0x6ae4928)
	static bool IsValid(struct FGameplayAttribute& Attribute); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer (Underlying native function: IsInstigatorLocallyControlledPlayer 0x6ae4850)
	static bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled (Underlying native function: IsInstigatorLocallyControlled 0x6ae479c)
	static bool IsInstigatorLocallyControlled(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult (Underlying native function: HasHitResult 0x6ae4634)
	static bool HasHitResult(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin (Underlying native function: GetTargetDataOrigin 0x6ae44d8)
	static struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform (Underlying native function: GetTargetDataEndPointTransform 0x6ae434c)
	static struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint (Underlying native function: GetTargetDataEndPoint 0x6ae4234)
	static struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin (Underlying native function: GetOrigin 0x6ae3fac)
	static struct FVector GetOrigin(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude (Underlying native function: GetModifiedAttributeMagnitude 0x6ae3e38)
	static float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayAttribute& Attribute); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform (Underlying native function: GetInstigatorTransform 0x6ae3d5c)
	static struct FTransform GetInstigatorTransform(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor (Underlying native function: GetInstigatorActor 0x6ae3cb4)
	static class AActor* GetInstigatorActor(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData (Underlying native function: GetHitResultFromTargetData 0x6ae3ae8)
	static struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult (Underlying native function: GetHitResult 0x6ae397c)
	static struct FHitResult GetHitResult(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData (Underlying native function: GetGameplayEffectUIData 0x6ae372c)
	static class UGameplayEffectUIData* GetGameplayEffectUIData(class UClass*& EffectClass, class UClass*& DataType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle (Underlying native function: GetGameplayEffectFromActiveEffectHandle 0x6ae353c)
	static class UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal (Underlying native function: GetGameplayCueEndLocationAndNormal 0x6ae30ec)
	static bool GetGameplayCueEndLocationAndNormal(class AActor*& TargetActor, struct FGameplayCueParameters& Parameters, struct FVector& Location, struct FVector& Normal); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection (Underlying native function: GetGameplayCueDirection 0x6ae2fa0)
	static bool GetGameplayCueDirection(class AActor*& TargetActor, struct FGameplayCueParameters& Parameters, struct FVector& Direction); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle (Underlying native function: GetGameplayAbilityFromSpecHandle 0x6ae2cf8)
	static class UGameplayAbility* GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent*& AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent (Underlying native function: GetFloatAttributeFromAbilitySystemComponent 0x6ae2b84)
	static float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent*& AbilitySystem, struct FGameplayAttribute& Attribute, bool& bSuccessfullyFoundAttribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent (Underlying native function: GetFloatAttributeBaseFromAbilitySystemComponent 0x6ae2a10)
	static float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent*& AbilitySystemComponent, struct FGameplayAttribute& Attribute, bool& bSuccessfullyFoundAttribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase (Underlying native function: GetFloatAttributeBase 0x6ae289c)
	static float GetFloatAttributeBase(class AActor*& Actor, struct FGameplayAttribute& Attribute, bool& bSuccessfullyFoundAttribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute (Underlying native function: GetFloatAttribute 0x6ae2728)
	static float GetFloatAttribute(class AActor*& Actor, struct FGameplayAttribute& Attribute, bool& bSuccessfullyFoundAttribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext (Underlying native function: GetEffectContext 0x6ae25c8)
	static struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle& SpecHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute (Underlying native function: GetDebugStringFromGameplayAttribute 0x6ae2334)
	static struct FString GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& Attribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData (Underlying native function: GetDataCountFromTargetData 0x6ae2274)
	static int GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles (Underlying native function: GetAllLinkedGameplayEffectSpecHandles 0x6ae1df0)
	static struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle& SpecHandle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData (Underlying native function: GetAllActorsFromTargetData 0x6ae1c54)
	static struct TArray<class AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData (Underlying native function: GetActorsFromTargetData 0x6ae1a70)
	static struct TArray<class AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount (Underlying native function: GetActorCount 0x6ae1944)
	static int GetActorCount(struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex (Underlying native function: GetActorByIndex 0x6ae184c)
	static class AActor* GetActorByIndex(struct FGameplayCueParameters& Parameters, int& Index); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration (Underlying native function: GetActiveGameplayEffectTotalDuration 0x6ae17c8)
	static float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime (Underlying native function: GetActiveGameplayEffectStartTime 0x6ae1744)
	static float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount (Underlying native function: GetActiveGameplayEffectStackLimitCount 0x6ae168c)
	static int GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount (Underlying native function: GetActiveGameplayEffectStackCount 0x6ae15e0)
	static int GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration (Underlying native function: GetActiveGameplayEffectRemainingDuration 0x6ae1514)
	static float GetActiveGameplayEffectRemainingDuration(class UObject*& WorldContextObject, struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime (Underlying native function: GetActiveGameplayEffectExpectedEndTime 0x6ae1490)
	static float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString (Underlying native function: GetActiveGameplayEffectDebugString 0x6ae13f8)
	static struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent (Underlying native function: GetAbilitySystemComponent 0x26a1334)
	static class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget (Underlying native function: ForwardGameplayCueToTarget 0x6ae0fb8)
	static void ForwardGameplayCueToTarget(struct TScriptInterface<class IGameplayCueInterface>& TargetCueInterface, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData (Underlying native function: FilterTargetData 0x6ae05f4)
	static struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle& ActorFilterClass); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase (Underlying native function: EvaluateAttributeValueWithTagsAndBase 0x6ae011c)
	static float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent*& AbilitySystem, struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float& BaseValue, bool& bSuccess); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags (Underlying native function: EvaluateAttributeValueWithTags 0x6adfd18)
	static float EvaluateAttributeValueWithTags(class UAbilitySystemComponent*& AbilitySystem, struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool& bSuccess); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute (Underlying native function: EqualEqual_GameplayAttributeGameplayAttribute 0x6adfba0)
	static bool EqualEqualGameplayAttributeGameplayAttribute(struct FGameplayAttribute& AttributeA, struct FGameplayAttribute& AttributeB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle (Underlying native function: EqualEqual_GameplayAbilitySpecHandle 0x6adfac4)
	static bool EqualEqualGameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle (Underlying native function: EqualEqual_ActiveGameplayEffectHandle 0x6adf9e0)
	static bool EqualEqualActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle*& A, struct FActiveGameplayEffectHandle*& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin (Underlying native function: EffectContextSetOrigin 0x6adf778)
	static void EffectContextSetOrigin(struct FGameplayEffectContextHandle& EffectContext, struct FVector& Origin); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid (Underlying native function: EffectContextIsValid 0x6adf66c)
	static bool EffectContextIsValid(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled (Underlying native function: EffectContextIsInstigatorLocallyControlled 0x6adf550)
	static bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult (Underlying native function: EffectContextHasHitResult 0x6adf434)
	static bool EffectContextHasHitResult(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject (Underlying native function: EffectContextGetSourceObject 0x6adf31c)
	static class UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor (Underlying native function: EffectContextGetOriginalInstigatorActor 0x6adf204)
	static class AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin (Underlying native function: EffectContextGetOrigin 0x6adf108)
	static struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor (Underlying native function: EffectContextGetInstigatorActor 0x6adeff0)
	static class AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult (Underlying native function: EffectContextGetHitResult 0x6adee34)
	static struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser (Underlying native function: EffectContextGetEffectCauser 0x6aded1c)
	static class AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult (Underlying native function: EffectContextAddHitResult 0x6adeb60)
	static void EffectContextAddHitResult(struct FGameplayEffectContextHandle& EffectContext, struct FHitResult& HitResult, bool& bReset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor (Underlying native function: DoesTargetDataContainActor 0x6adea1c)
	static bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int& Index, class AActor*& Actor); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements (Underlying native function: DoesGameplayCueMeetTagRequirements 0x6ade840)
	static bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle (Underlying native function: CloneSpecHandle 0x6ade1b8)
	static struct FGameplayEffectSpecHandle CloneSpecHandle(class AActor*& InNewInstigator, class AActor*& InEffectCauser, struct FGameplayEffectSpecHandle& GameplayEffectSpecHandleClone); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters (Underlying native function: BreakGameplayCueParameters 0x1ef4eec)
	static void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int& GameplayEffectLevel, int& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude (Underlying native function: AssignTagSetByCallerMagnitude 0x6adcb1c)
	static struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTag& DataTag, float& Magnitude); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude (Underlying native function: AssignSetByCallerMagnitude 0x6adc980)
	static struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle& SpecHandle, struct FName& DataName, float& Magnitude); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle (Underlying native function: AppendTargetDataHandle 0x6adad58)
	static struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle& TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags (Underlying native function: AddLooseGameplayTags 0x2ac4ef0)
	static bool AddLooseGameplayTags(class AActor*& Actor, struct FGameplayTagContainer& GameplayTags, bool& bShouldReplicate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec (Underlying native function: AddLinkedGameplayEffectSpec 0x6adab30)
	static struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect (Underlying native function: AddLinkedGameplayEffect 0x6ada874)
	static struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle& SpecHandle, class UClass*& LinkedGameplayEffect); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags (Underlying native function: AddGrantedTags 0x6ada6a0)
	static struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTagContainer& NewGameplayTags); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag (Underlying native function: AddGrantedTag 0x6ada540)
	static struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTag& NewGameplayTag); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags (Underlying native function: AddAssetTags 0x6ada370)
	static struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTagContainer& NewGameplayTags); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag (Underlying native function: AddAssetTag 0x6ada214)
	static struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle& SpecHandle, struct FGameplayTag& NewGameplayTag); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations (Underlying native function: AbilityTargetDataFromLocations 0x6ada0e4)
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult (Underlying native function: AbilityTargetDataFromHitResult 0x6ada00c)
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray (Underlying native function: AbilityTargetDataFromActorArray 0x1add3d4)
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<class AActor*>& ActorArray, bool& OneTargetPerHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor (Underlying native function: AbilityTargetDataFromActor 0x6ad9f58)
	static struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

