// Class /Script/LiveLink.LiveLinkBlueprintLibrary
// Size: 0x28
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformNames (Underlying native function: TransformNames 0x7cda360)
	static void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, struct TArray<struct FName>& TransformNames); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformName (Underlying native function: TransformName 0x7cda22c)
	static void TransformName(struct FLiveLinkTransform& LiveLinkTransform, struct FName& Name); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled (Underlying native function: SetLiveLinkSubjectEnabled 0x7cda108)
	static void SetLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey& SubjectKey, bool& bEnabled); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.RemoveSource (Underlying native function: RemoveSource 0x7cda044)
	static bool RemoveSource(struct FLiveLinkSourceHandle& SourceHandle); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform (Underlying native function: ParentBoneSpaceTransform 0x7cd9ea8)
	static void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // (Final | Native | Static | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms (Underlying native function: NumberOfTransforms 0x7cd9dd4)
	static int NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled (Underlying native function: IsSpecificLiveLinkSubjectEnabled 0x7cd9ca8)
	static bool IsSpecificLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey& SubjectKey, bool& bForThisFrame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid (Underlying native function: IsSourceStillValid 0x7cd9bd0)
	static bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled (Underlying native function: IsLiveLinkSubjectEnabled 0x7cd9afc)
	static bool IsLiveLinkSubjectEnabled(struct FLiveLinkSubjectName& SubjectName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.HasParent (Underlying native function: HasParent 0x7cd9a10)
	static bool HasParent(struct FLiveLinkTransform& LiveLinkTransform); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByName (Underlying native function: GetTransformByName 0x7cd9860)
	static void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, struct FName& TransformName, struct FLiveLinkTransform& LiveLinkTransform); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex (Underlying native function: GetTransformByIndex 0x7cd96b0)
	static void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int& TransformIndex, struct FLiveLinkTransform& LiveLinkTransform); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole (Underlying native function: GetSpecificLiveLinkSubjectRole 0x7cd9130)
	static class UClass* GetSpecificLiveLinkSubjectRole(struct FLiveLinkSubjectKey& SubjectKey); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid (Underlying native function: GetSourceTypeFromGuid 0x7cd904c)
	static struct FText GetSourceTypeFromGuid(struct FGuid& SourceGuid); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceType (Underlying native function: GetSourceType 0x7cd8efc)
	static struct FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus (Underlying native function: GetSourceStatus 0x7cd8dac)
	static struct FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName (Underlying native function: GetSourceMachineName 0x7cd8c5c)
	static struct FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetRootTransform (Underlying native function: GetRootTransform 0x7cd8aec)
	static void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform& LiveLinkTransform); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue (Underlying native function: GetPropertyValue 0x7cd8954)
	static bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, struct FName& PropertyName, float& Value); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetParent (Underlying native function: GetParent 0x7cd87e0)
	static void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform& Parent); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetMetaData (Underlying native function: GetMetaData 0x7cd863c)
	static void GetMetaData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata& MetaData); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects (Underlying native function: GetLiveLinkSubjects 0x7cd8528)
	static struct TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool& bIncludeDisabledSubject, bool& bIncludeVirtualSubject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole (Underlying native function: GetLiveLinkSubjectRole 0x7cd84a0)
	static class UClass* GetLiveLinkSubjectRole(struct FLiveLinkSubjectName& SubjectName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames (Underlying native function: GetLiveLinkEnabledSubjectNames 0x7cd83e4)
	static struct TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool& bIncludeVirtualSubject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetCurves (Underlying native function: GetCurves 0x7cd8238)
	static void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, struct TMap<struct FName, float>& Curves); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetChildren (Underlying native function: GetChildren 0x7cd80f8)
	static void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, struct TArray<struct FLiveLinkTransform>& Children); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetBasicData (Underlying native function: GetBasicData 0x7cd7f3c)
	static void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData& BasicBlueprintData); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData (Underlying native function: GetAnimationStaticData 0x7cd7b94)
	static bool GetAnimationStaticData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData& AnimationStaticData); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData (Underlying native function: GetAnimationFrameData 0x7cd79e8)
	static bool GetAnimationFrameData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData& AnimationFrameData); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole (Underlying native function: EvaluateLiveLinkFrameWithSpecificRole 0x7cd7880)
	static bool EvaluateLiveLinkFrameWithSpecificRole(struct FLiveLinkSubjectName& SubjectName, class UClass*& Role, struct FLiveLinkBaseBlueprintData*& OutBlueprintData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset (Underlying native function: EvaluateLiveLinkFrameAtWorldTimeOffset 0x7cd76d0)
	static bool EvaluateLiveLinkFrameAtWorldTimeOffset(struct FLiveLinkSubjectName& SubjectName, class UClass*& Role, float& WorldTimeOffset, struct FLiveLinkBaseBlueprintData*& OutBlueprintData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime (Underlying native function: EvaluateLiveLinkFrameAtSceneTime 0x7cd7520)
	static bool EvaluateLiveLinkFrameAtSceneTime(struct FLiveLinkSubjectName& SubjectName, class UClass*& Role, struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData*& OutBlueprintData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame (Underlying native function: EvaluateLiveLinkFrame 0x7cd73ec)
	static bool EvaluateLiveLinkFrame(struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData*& OutBlueprintData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform (Underlying native function: ComponentSpaceTransform 0x7cd6f48)
	static void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // (Final | Native | Static | Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ChildCount (Underlying native function: ChildCount 0x7cd6e38)
	static int ChildCount(struct FLiveLinkTransform& LiveLinkTransform); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable | BlueprintPure)
};

