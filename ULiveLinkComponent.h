// Class /Script/LiveLink.LiveLinkComponent
// Size: 0xc0
class ULiveLinkComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnLiveLinkUpdated; // 0xa0 (0x10)
	unsigned char padding_b0[0x10]; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime (Underlying native function: GetSubjectDataAtWorldTime 0x7cd94fc)
	void GetSubjectDataAtWorldTime(struct FName& SubjectName, float& WorldTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime (Underlying native function: GetSubjectDataAtSceneTime 0x7cd933c)
	void GetSubjectDataAtSceneTime(struct FName& SubjectName, struct FTimecode& SceneTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectData (Underlying native function: GetSubjectData 0x7cd91d4)
	void GetSubjectData(struct FName& SubjectName, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames (Underlying native function: GetAvailableSubjectNames 0x7cd7ea0)
	void GetAvailableSubjectNames(struct TArray<struct FName>& SubjectNames); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

