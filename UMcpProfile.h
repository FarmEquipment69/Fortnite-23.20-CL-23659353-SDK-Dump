// Class /Script/McpProfileSys.McpProfile
// Size: 0x140
class UMcpProfile : public UObject
{
	bool AllowSubscriptionToNotificationsService; // 0x28 (0x1)
	unsigned char unreflected_29[0x77]; // 0x29 (0x77) 
	struct FString DebugName; // 0xa0 (0x10)
	bool bProfileLockOperationPending; // 0xb0 (0x1)
	bool bProfileUnlockOperationPending; // 0xb1 (0x1)
	bool bEnableMocks; // 0xb2 (0x1)
	unsigned char unreflected_b3[0x15]; // 0xb3 (0x15) 
	class UMcpProfileGroup* ProfileGroup; // 0xc8 (0x8)
	struct FString ProfileId; // 0xd0 (0x10)
	int64_t ProfileRevision; // 0xe0 (0x8)
	int FullProfileQueryQueued; // 0xe8 (0x4)
	bool bProfileWriteLocked; // 0xec (0x1)
	unsigned char unreflected_ed[0x3]; // 0xed (0x3) 
	struct FDateTime* ProfileWriteLockExpireTime; // 0xf0 (0x8)
	bool QueuedProfileUpdatingEnabled; // 0xf8 (0x1)
	unsigned char padding_f9[0x47]; // 0xf9 (0x47)

	/* Functions */

	// Function /Script/McpProfileSys.McpProfile.UnlockProfileForWrite (Has no native function)
	void UnlockProfileForWrite(struct FString& Code, struct FDedicatedServerUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/McpProfileSys.McpProfile.QueryPublicProfile (Has no native function)
	void QueryPublicProfile(struct FBaseUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/McpProfileSys.McpProfile.QueryProfile (Has no native function)
	void QueryProfile(struct FBaseUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/McpProfileSys.McpProfile.LockProfileForWrite (Has no native function)
	void LockProfileForWrite(struct FString& Code, int& Timeout, struct FDedicatedServerUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/McpProfileSys.McpProfile.DeleteProfile (Has no native function)
	void DeleteProfile(struct FClientUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)

	// Function /Script/McpProfileSys.McpProfile.DeleteAllProfiles (Has no native function)
	void DeleteAllProfiles(struct FClientUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)
};

