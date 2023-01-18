// Class /Script/FortniteGame.FortGameViewportClient
// Size: 0x4b0
class UFortGameViewportClient : public UCommonGameViewportClient
{
	unsigned char unreflected_3d0[0x38]; // 0x3d0 (0x38) 
	struct FText NetworkFailureMessage; // 0x408 (0x18)
	struct FString NetworkFailureMessageAdditionalAnalyticsString; // 0x420 (0x10)
	unsigned char padding_430[0x80]; // 0x430 (0x80)

	/* Functions */

	// Function /Script/FortniteGame.FortGameViewportClient.SetViewportSize (Underlying native function: SetViewportSize 0x8d99890)
	void SetViewportSize(int& ControllerId, float& OriginX, float& OriginY, float& SizeX, float& SizeY, float& Time); // (Final | 0x00000002 | Exec | Native | Public)
};

