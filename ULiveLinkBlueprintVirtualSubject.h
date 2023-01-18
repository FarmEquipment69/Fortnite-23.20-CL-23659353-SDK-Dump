// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
// Size: 0x180
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{
	unsigned char unreflected_180[0x180]; 

	/* Functions */

	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal (Underlying native function: UpdateVirtualSubjectStaticData_Internal 0x7cda5a4)
	bool UpdateVirtualSubjectStaticDataInternal(struct FLiveLinkBaseStaticData& InStruct); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal (Underlying native function: UpdateVirtualSubjectFrameData_Internal 0x7cda4a0)
	bool UpdateVirtualSubjectFrameDataInternal(struct FLiveLinkBaseFrameData& InStruct, bool& bInShouldStampCurrentTime); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate (Has no native function)
	void OnUpdate(); // (Event | Public | BlueprintEvent)

	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize (Has no native function)
	void OnInitialize(); // (Event | Public | BlueprintEvent)
};

