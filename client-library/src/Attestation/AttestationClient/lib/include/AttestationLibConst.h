//-------------------------------------------------------------------------------------------------
// <copyright file="AttestationLibConst.h" company="Microsoft Corporation">
// Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
//-------------------------------------------------------------------------------------------------
#pragma once

/*********************Attestation Client Lib*************************************/

#define JSON_OS_TYPE_KEY "OSType"
#define JSON_OS_DISTRO_KEY "OSDistro"
#define JSON_OS_VERSION_MAJOR_KEY "OSVersionMajor"
#define JSON_OS_VERSION_MINOR_KEY "OSVersionMinor"
#define JSON_OS_BUILD_KEY "OSBuild"
#define JSON_TCG_LOGS_KEY "TcgLogs"
#define JSON_CLIENT_PAYLOAD_KEY "ClientPayload"
#define JSON_TPM_INFO_KEY "TpmInfo"
#define JSON_AIK_CERT_KEY "AikCert"
#define JSON_AIK_PUB_KEY "AikPub"
#define JSON_ENC_PUB_KEY "EncKeyPub"
#define JSON_ENC_KEY_CERTIFY_INFO "EncKeyCertifyInfo"
#define JSON_PCR_QUOTE_KEY "PcrQuote"
#define JSON_PCR_SIGNATURE_KEY "PcrSignature"
#define JSON_ENC_KEY_CERTIFY_INFO_SIGNATURE "EncKeyCertifyInfoSignature"
#define JSON_PCRS_KEY "PCRs"
#define JSON_PCR_INDEX_KEY "Index"
#define JSON_PCR_DIGEST_KEY "Digest"
#define JSON_PROTOCOL_VERSION_KEY "AttestationProtocolVersion"
#define JSON_ATTESTATION_INFO_KEY "AttestationInfo"
#define JSON_PCR_SET_KEY "PcrSet"
#define JSON_RESPONSE_EXCRYPTION_PARAMETERS_KEY "EncryptionParams"
#define JSON_RESPONSE_HASH_KEY "Hash"
#define JSON_RESPONSE_PCR_SET_KEY "PcrSet"
#define JSON_RESPONSE_PCRS_KEY "Pcrs"
#define JSON_RESPONSE_BLOCK_MODE_KEY "BlockMode"
#define JSON_RESPONSE_BLOCK_PADDING_KEY "BlockPadding"
#define JSON_RESPONSE_CIPHER_KEY "Cipher"
#define JSON_RESPONSE_BLOCK_KEY_SIZE_KEY "KeySizeInBits"
#define JSON_RESPONSE_IV_KEY "Iv"
#define JSON_RESPONSE_AUTHENTICATION_DATA_KEY "AuthenticationData"
#define JSON_RESPONSE_JWT_KEY "Jwt"
#define JSON_RESPONSE_ENC_INNER_KEY_KEY "EncryptedInnerKey"

#define JSON_RESPONSE_HASH_SHA1_VALUE "Sha1"
#define JSON_RESPONSE_HASH_SHA256_VALUE "Sha256"
#define JSON_RESPONSE_HASH_SHA384_VALUE "Sha384"
#define JSON_RESPONSE_HASH_SHA512_VALUE "Sha512"
#define JSON_RESPONSE_HASH_SM3_256_VALUE "Sm3_256"
#define JSON_RESPONSE_BLOCK_MODE_CHAINING_GCM_VALUE "ChainingModeGCM"
#define JSON_RESPONSE_BLOCK_PADDING_PKCS7_VALUE "PKCS7"
#define JSON_RESPONSE_CIPHER_AES_VALUE "AES"

#define JSON_HTTP_ERROR_LOWER_KEY "error"
#define JSON_HTTP_ERROR_CODE_LOWER_KEY "code"
#define JSON_HTTP_ERROR_MESSAGE_LOWER_KEY "message"
#define JSON_HTTP_ERROR_KEY "Error"
#define JSON_HTTP_ERROR_CODE_KEY "Code"
#define JSON_HTTP_ERROR_MESSAGE_KEY "Message"

#define JSON_ISOLATION_INFO_KEY "IsolationInfo"
#define JSON_ISOLATION_TYPE_KEY "Type"
#define JSON_ISOLATION_TYPE_TVM "TrustedLaunch"
#define JSON_ISOLATION_TYPE_SEVSNP "SevSnp"
#define JSON_ISOLATION_EVIDENCE_KEY "Evidence"
#define JSON_ISOLATION_PROOF_KEY "Proof"
#define JSON_ISOLATION_RUNTIME_DATA_KEY "RunTimeData"
#define JSON_ISOLATION_EVIDENCE_SNPREPORT "SnpReport"
#define JSON_ISOLATION_EVIDENCE_VCEKCERT "VcekCertChain"

/*********************Attestation Client*************************************/

#define JSON_ARM_ID_KEY "ArmID"
#define JSON_VM_HEALTH_STATUS_KEY "HealthStatus"
#define JSON_VM_HEALTH_HEALTHY_VALUE "Healthy"
#define JSON_VM_HEALTH_UNHEALTHY_VALUE "Unhealthy"
#define JSON_VM_HEALTH_PLATFORM_ERROR_VALUE "PlatformError"
#define JSON_REPORT_ATTESTATION_TOKEN_KEY "AttestationToken"
#define JSON_REPORT_ATTESTATION_STATUS_MESSAGE_KEY  "AttestationStatusMessage"
#define JSON_REPORT_PLATFORM_ERROR_MESSAGE_KEY  "PlatformErrorMessage"
#define JSON_REPORT_AAS_ATTESTATION_URI  "AttestationUri"
#define JSON_HEARTBEAT_VERSION_KEY "version"
#define JSON_HEARTBEAT_VERSION_VALUE 1.0
#define JSON_HEARTBEAT_ELEMENT_KEY "heartbeat"
#define JSON_HEARTBEAT_STATUS_KEY "status"
#define JSON_HEARTBEAT_STATUS_READY_VALUE "ready"
#define JSON_HEARTBEAT_STATUS_NOT_READY_VALUE "notready"
