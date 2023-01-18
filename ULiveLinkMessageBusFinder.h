// Class /Script/LiveLink.LiveLinkMessageBusFinder
// Size: 0x80
class ULiveLinkMessageBusFinder : public UObject
{
	unsigned char unreflected_80[0x80]; 

	/* Functions */

	// Function /Script/LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders (Underlying native function: GetAvailableProviders 0x7cd7d1c)
	void GetAvailableProviders(class UObject*& WorldContextObject, struct FLatentActionInfo& LatentInfo, float& Duration, struct TArray<struct FProviderPollResult>& AvailableProviders); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder (Underlying native function: ConstructMessageBusFinder 0x7cd73c0)
	static class ULiveLinkMessageBusFinder* ConstructMessageBusFinder(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConnectToProvider (Underlying native function: ConnectToProvider 0x7cd70e4)
	static void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle& SourceHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

