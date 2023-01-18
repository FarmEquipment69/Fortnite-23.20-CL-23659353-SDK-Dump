// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController
// Size: 0x588
class UPictureInPictureFNEventsController : public UPictureInPictureMediaController
{
	class UPictureInPictureFNEventsClient* FNEventsClient; // 0x558 (0x8)
	class ULiveEventHUDAd* HUDAdvertWidget; // 0x560 (0x8)
	unsigned char padding_568[0x20]; // 0x568 (0x20)

	/* Functions */

	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.UpdateClientLoginState (Underlying native function: UpdateClientLoginState 0x1d9ad0c)
	void UpdateClientLoginState(struct TArray<struct FPiPPartnerSource>& UpdatedSources); // (Final | Native | Private | HasOutParms)

	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLogoutSuccess (Underlying native function: OnClientLogoutSuccess 0x7523e04)
	void OnClientLogoutSuccess(); // (Final | Native | Private)

	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLoginSuccess (Underlying native function: OnClientLoginSuccess 0x7523df0)
	void OnClientLoginSuccess(); // (Final | Native | Private)

	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaRemoveEventsStream (Underlying native function: HandleFNMediaRemoveEventsStream 0x7523c9c)
	void HandleFNMediaRemoveEventsStream(struct FString& InEventName); // (Final | Native | Protected)

	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaEventsStreams (Underlying native function: HandleFNMediaEventsStreams 0x7523bcc)
	void HandleFNMediaEventsStreams(struct FFortMediaEventsStreamAssets& VideoStreamAssets); // (Final | Native | Protected | HasOutParms)

	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.ExitEvent (Underlying native function: ExitEvent 0x7523bb0)
	void ExitEvent(); // (Final | Native | Private)

	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.AddPartnerActionAnalytics (Underlying native function: AddPartnerActionAnalytics 0x7523788)
	void AddPartnerActionAnalytics(struct FString& InPartnerName, enum PictureInPictureAction& InActionType); // (Final | Native | Private)
};

