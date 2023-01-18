// Class /Script/PictureInPictureCore.PictureInPictureClient
// Size: 0xa8
class UPictureInPictureClient : public UObject
{
	struct FMulticastInlineDelegate LoginSuccessEvent; // 0x28 (0x10)
	struct FMulticastInlineDelegate LogoutSuccessEvent; // 0x38 (0x10)
	struct FMulticastInlineDelegate QRCodeReceivedEvent; // 0x48 (0x10)
	struct FMulticastInlineDelegate ErrorDelegate; // 0x58 (0x10)
	unsigned char unreflected_68[0x8]; // 0x68 (0x8) 
	struct FString UserName; // 0x70 (0x10)
	class UEpicCMSImage* UserAvatarImage; // 0x80 (0x8)
	unsigned char unreflected_88[0x8]; // 0x88 (0x8) 
	class UTexture2DDynamic* CurrentQRCodeTexture; // 0x90 (0x8)
	unsigned char padding_98[0x10]; // 0x98 (0x10)

	/* Functions */

	// Function /Script/PictureInPictureCore.PictureInPictureClient.Logout (Underlying native function: Logout 0x14f9024)
	void Logout(); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureClient.IsLoggedIn (Underlying native function: IsLoggedIn 0x2ab4d90)
	bool IsLoggedIn(); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture (Underlying native function: GetQRCodeTexture 0x212bd78)
	class UTexture2DDynamic* GetQRCodeTexture(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetLoginState (Underlying native function: GetLoginState 0x72ab810)
	struct TEnumAsByte<PictureInPictureAuthState> GetLoginState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetAvatarImage (Underlying native function: GetAvatarImage 0x751a904)
	class UEpicCMSImage* GetAvatarImage(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureClient.EndLogin (Underlying native function: EndLogin 0x7066da0)
	void EndLogin(class UObject*& InWorldContext); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureClient.CheckLogin (Underlying native function: CheckLogin 0x71f88ec)
	void CheckLogin(class UObject*& InWorldContext); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureClient.BeginLogin (Underlying native function: BeginLogin 0x751a6d0)
	void BeginLogin(class UObject*& InWorldContext); // (Native | Public | BlueprintCallable)
};

