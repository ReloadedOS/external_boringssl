/* Copyright (c) 2015, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

 /* This file was generated by err_data_generate.go. */

#include <openssl/base.h>
#include <openssl/err.h>
#include <openssl/type_check.h>


OPENSSL_COMPILE_ASSERT(ERR_LIB_NONE == 1, library_values_changed_1);
OPENSSL_COMPILE_ASSERT(ERR_LIB_SYS == 2, library_values_changed_2);
OPENSSL_COMPILE_ASSERT(ERR_LIB_BN == 3, library_values_changed_3);
OPENSSL_COMPILE_ASSERT(ERR_LIB_RSA == 4, library_values_changed_4);
OPENSSL_COMPILE_ASSERT(ERR_LIB_DH == 5, library_values_changed_5);
OPENSSL_COMPILE_ASSERT(ERR_LIB_EVP == 6, library_values_changed_6);
OPENSSL_COMPILE_ASSERT(ERR_LIB_BUF == 7, library_values_changed_7);
OPENSSL_COMPILE_ASSERT(ERR_LIB_OBJ == 8, library_values_changed_8);
OPENSSL_COMPILE_ASSERT(ERR_LIB_PEM == 9, library_values_changed_9);
OPENSSL_COMPILE_ASSERT(ERR_LIB_DSA == 10, library_values_changed_10);
OPENSSL_COMPILE_ASSERT(ERR_LIB_X509 == 11, library_values_changed_11);
OPENSSL_COMPILE_ASSERT(ERR_LIB_ASN1 == 12, library_values_changed_12);
OPENSSL_COMPILE_ASSERT(ERR_LIB_CONF == 13, library_values_changed_13);
OPENSSL_COMPILE_ASSERT(ERR_LIB_CRYPTO == 14, library_values_changed_14);
OPENSSL_COMPILE_ASSERT(ERR_LIB_EC == 15, library_values_changed_15);
OPENSSL_COMPILE_ASSERT(ERR_LIB_SSL == 16, library_values_changed_16);
OPENSSL_COMPILE_ASSERT(ERR_LIB_BIO == 17, library_values_changed_17);
OPENSSL_COMPILE_ASSERT(ERR_LIB_PKCS7 == 18, library_values_changed_18);
OPENSSL_COMPILE_ASSERT(ERR_LIB_PKCS8 == 19, library_values_changed_19);
OPENSSL_COMPILE_ASSERT(ERR_LIB_X509V3 == 20, library_values_changed_20);
OPENSSL_COMPILE_ASSERT(ERR_LIB_RAND == 21, library_values_changed_21);
OPENSSL_COMPILE_ASSERT(ERR_LIB_ENGINE == 22, library_values_changed_22);
OPENSSL_COMPILE_ASSERT(ERR_LIB_OCSP == 23, library_values_changed_23);
OPENSSL_COMPILE_ASSERT(ERR_LIB_UI == 24, library_values_changed_24);
OPENSSL_COMPILE_ASSERT(ERR_LIB_COMP == 25, library_values_changed_25);
OPENSSL_COMPILE_ASSERT(ERR_LIB_ECDSA == 26, library_values_changed_26);
OPENSSL_COMPILE_ASSERT(ERR_LIB_ECDH == 27, library_values_changed_27);
OPENSSL_COMPILE_ASSERT(ERR_LIB_HMAC == 28, library_values_changed_28);
OPENSSL_COMPILE_ASSERT(ERR_LIB_DIGEST == 29, library_values_changed_29);
OPENSSL_COMPILE_ASSERT(ERR_LIB_CIPHER == 30, library_values_changed_30);
OPENSSL_COMPILE_ASSERT(ERR_LIB_HKDF == 31, library_values_changed_31);
OPENSSL_COMPILE_ASSERT(ERR_LIB_USER == 32, library_values_changed_32);
OPENSSL_COMPILE_ASSERT(ERR_NUM_LIBS == 33, library_values_changed_num);

const uint32_t kOpenSSLReasonValues[] = {
    0xc320838,
    0xc328852,
    0xc330861,
    0xc338871,
    0xc340880,
    0xc348899,
    0xc3508a5,
    0xc3588c2,
    0xc3608e2,
    0xc3688f0,
    0xc370900,
    0xc37890d,
    0xc38091d,
    0xc388928,
    0xc39093e,
    0xc39894d,
    0xc3a0961,
    0xc3a8845,
    0xc3b00ea,
    0xc3b88d4,
    0x10320845,
    0x10329535,
    0x10331541,
    0x1033955a,
    0x1034156d,
    0x10348efc,
    0x10350c5e,
    0x10359580,
    0x10361595,
    0x103695a8,
    0x103715c7,
    0x103795e0,
    0x103815f5,
    0x10389613,
    0x10391622,
    0x1039963e,
    0x103a1659,
    0x103a9668,
    0x103b1684,
    0x103b969f,
    0x103c16b6,
    0x103c80ea,
    0x103d16c7,
    0x103d96db,
    0x103e16fa,
    0x103e9709,
    0x103f1720,
    0x103f9733,
    0x10400c22,
    0x10409746,
    0x10411764,
    0x10419777,
    0x10421791,
    0x104297a1,
    0x104317b5,
    0x104397cb,
    0x104417e3,
    0x104497f8,
    0x1045180c,
    0x1045981e,
    0x104605fb,
    0x1046894d,
    0x10471833,
    0x1047984a,
    0x1048185f,
    0x1048986d,
    0x10490e5e,
    0x14320c05,
    0x14328c13,
    0x14330c22,
    0x14338c34,
    0x143400ac,
    0x143480ea,
    0x18320083,
    0x18328f52,
    0x183300ac,
    0x18338f68,
    0x18340f7c,
    0x183480ea,
    0x18350f91,
    0x18358fa9,
    0x18360fbe,
    0x18368fd2,
    0x18370ff6,
    0x1837900c,
    0x18381020,
    0x18389030,
    0x18390a73,
    0x18399040,
    0x183a1068,
    0x183a908e,
    0x183b0c6a,
    0x183b90c3,
    0x183c10d5,
    0x183c90e0,
    0x183d10f0,
    0x183d9101,
    0x183e1112,
    0x183e9124,
    0x183f114d,
    0x183f9166,
    0x1840117e,
    0x184086d3,
    0x184110b1,
    0x1841907c,
    0x1842109b,
    0x18429055,
    0x203211b8,
    0x203291a5,
    0x243211c4,
    0x24328993,
    0x243311d6,
    0x243391e3,
    0x243411f0,
    0x24349202,
    0x24351211,
    0x2435922e,
    0x2436123b,
    0x24369249,
    0x24371257,
    0x24379265,
    0x2438126e,
    0x2438927b,
    0x2439128e,
    0x28320c52,
    0x28328c6a,
    0x28330c22,
    0x28338c7d,
    0x28340c5e,
    0x283480ac,
    0x283500ea,
    0x2c322c99,
    0x2c3292a5,
    0x2c332ca7,
    0x2c33acb9,
    0x2c342ccd,
    0x2c34acdf,
    0x2c352cfa,
    0x2c35ad0c,
    0x2c362d1f,
    0x2c36832d,
    0x2c372d2c,
    0x2c37ad3e,
    0x2c382d63,
    0x2c38ad7a,
    0x2c392d88,
    0x2c39ad98,
    0x2c3a2daa,
    0x2c3aadbe,
    0x2c3b2dcf,
    0x2c3badee,
    0x2c3c12b7,
    0x2c3c92cd,
    0x2c3d2e02,
    0x2c3d92e6,
    0x2c3e2e1f,
    0x2c3eae2d,
    0x2c3f2e45,
    0x2c3fae5d,
    0x2c402e6a,
    0x2c4091b8,
    0x2c412e7b,
    0x2c41ae8e,
    0x2c42117e,
    0x2c42ae9f,
    0x2c430720,
    0x2c43ade0,
    0x2c442d51,
    0x30320000,
    0x30328015,
    0x3033001f,
    0x30338038,
    0x3034004a,
    0x30348064,
    0x3035006b,
    0x30358083,
    0x30360094,
    0x303680ac,
    0x303700b9,
    0x303780c8,
    0x303800ea,
    0x303880f7,
    0x3039010a,
    0x30398125,
    0x303a013a,
    0x303a814e,
    0x303b0162,
    0x303b8173,
    0x303c018c,
    0x303c81a9,
    0x303d01b7,
    0x303d81cb,
    0x303e01db,
    0x303e81f4,
    0x303f0204,
    0x303f8217,
    0x30400226,
    0x30408232,
    0x30410247,
    0x30418257,
    0x3042026e,
    0x3042827b,
    0x3043028e,
    0x3043829d,
    0x304402b2,
    0x304482d3,
    0x304502e6,
    0x304582f9,
    0x30460312,
    0x3046832d,
    0x3047034a,
    0x30478363,
    0x30480371,
    0x30488382,
    0x30490391,
    0x304983a9,
    0x304a03bb,
    0x304a83cf,
    0x304b03ee,
    0x304b8401,
    0x304c040c,
    0x304c841d,
    0x304d0429,
    0x304d843f,
    0x304e044d,
    0x304e8463,
    0x304f0475,
    0x304f8487,
    0x3050049a,
    0x305084ad,
    0x305104be,
    0x305184ce,
    0x305204e6,
    0x305284fb,
    0x30530513,
    0x30538527,
    0x3054053f,
    0x30548558,
    0x30550571,
    0x3055858e,
    0x30560599,
    0x305685b1,
    0x305705c1,
    0x305785d2,
    0x305805e5,
    0x305885fb,
    0x30590604,
    0x30598619,
    0x305a062c,
    0x305a863b,
    0x305b065b,
    0x305b866a,
    0x305c068b,
    0x305c86a7,
    0x305d06b3,
    0x305d86d3,
    0x305e06ef,
    0x305e8700,
    0x305f0716,
    0x305f8720,
    0x34320b63,
    0x34328b77,
    0x34330b94,
    0x34338ba7,
    0x34340bb6,
    0x34348bef,
    0x34350bd3,
    0x3c320083,
    0x3c328ca7,
    0x3c330cc0,
    0x3c338cdb,
    0x3c340cf8,
    0x3c348d22,
    0x3c350d3d,
    0x3c358d63,
    0x3c360d7c,
    0x3c368d94,
    0x3c370da5,
    0x3c378db3,
    0x3c380dc0,
    0x3c388dd4,
    0x3c390c6a,
    0x3c398df7,
    0x3c3a0e0b,
    0x3c3a890d,
    0x3c3b0e1b,
    0x3c3b8e36,
    0x3c3c0e48,
    0x3c3c8e7b,
    0x3c3d0e85,
    0x3c3d8e99,
    0x3c3e0ea7,
    0x3c3e8ecc,
    0x3c3f0c93,
    0x3c3f8eb5,
    0x3c4000ac,
    0x3c4080ea,
    0x3c410d13,
    0x3c418d52,
    0x3c420e5e,
    0x3c428de8,
    0x403218c6,
    0x403298dc,
    0x4033190a,
    0x40339914,
    0x4034192b,
    0x40349949,
    0x40351959,
    0x4035996b,
    0x40361978,
    0x40369984,
    0x40371999,
    0x403799ab,
    0x403819b6,
    0x403899c8,
    0x40390efc,
    0x403999d8,
    0x403a19eb,
    0x403a9a0c,
    0x403b1a1d,
    0x403b9a2d,
    0x403c0064,
    0x403c8083,
    0x403d1ab1,
    0x403d9ac7,
    0x403e1ad6,
    0x403e9b0e,
    0x403f1b28,
    0x403f9b36,
    0x40401b4b,
    0x40409b5f,
    0x40411b7c,
    0x40419b97,
    0x40421bb0,
    0x40429bc3,
    0x40431bd7,
    0x40439bef,
    0x40441c06,
    0x404480ac,
    0x40451c1b,
    0x40459c2d,
    0x40461c51,
    0x40469c71,
    0x40471c7f,
    0x40479ca6,
    0x40481cf9,
    0x40489d2c,
    0x40491d43,
    0x40499d5d,
    0x404a1d74,
    0x404a9d92,
    0x404b1daa,
    0x404b9dc1,
    0x404c1dd7,
    0x404c9de9,
    0x404d1e0a,
    0x404d9e43,
    0x404e1e57,
    0x404e9e64,
    0x404f1e91,
    0x404f9eba,
    0x40501ef5,
    0x40509f09,
    0x40511f24,
    0x40521f34,
    0x40529f58,
    0x40531f70,
    0x40539f83,
    0x40541f98,
    0x40549fbb,
    0x40551fc9,
    0x40559fe6,
    0x40561ff3,
    0x4056a00c,
    0x40572024,
    0x4057a037,
    0x4058204c,
    0x4058a073,
    0x405920a2,
    0x4059a0cf,
    0x405a20e3,
    0x405aa0f3,
    0x405b210b,
    0x405ba11c,
    0x405c212f,
    0x405ca16e,
    0x405d217b,
    0x405da192,
    0x405e21d0,
    0x405e8ab1,
    0x405f21f1,
    0x405fa1fe,
    0x4060220c,
    0x4060a22e,
    0x40612272,
    0x4061a2aa,
    0x406222c1,
    0x4062a2d2,
    0x406322e3,
    0x4063a2f8,
    0x4064230f,
    0x4064a33b,
    0x40652356,
    0x4065a36d,
    0x40662385,
    0x4066a3af,
    0x406723da,
    0x4067a3fb,
    0x40682422,
    0x4068a443,
    0x40692475,
    0x4069a4a3,
    0x406a24c4,
    0x406aa4e4,
    0x406b266c,
    0x406ba68f,
    0x406c26a5,
    0x406ca920,
    0x406d294f,
    0x406da977,
    0x406e29a5,
    0x406ea9f2,
    0x406f2a11,
    0x406faa49,
    0x40702a5c,
    0x4070aa79,
    0x40710800,
    0x4071aa8b,
    0x40722a9e,
    0x4072aab7,
    0x40732acf,
    0x407394a4,
    0x40742ae3,
    0x4074aafd,
    0x40752b0e,
    0x4075ab22,
    0x40762b30,
    0x4076927b,
    0x40772b55,
    0x4077ab77,
    0x40782b92,
    0x4078abcb,
    0x40792be2,
    0x4079abf8,
    0x407a2c04,
    0x407aac17,
    0x407b2c2c,
    0x407bac3e,
    0x407c2c6f,
    0x407cac78,
    0x407d245e,
    0x407d9eca,
    0x407e2ba7,
    0x407ea083,
    0x407f1c93,
    0x407f9a53,
    0x40801ea1,
    0x40809cbb,
    0x40811f46,
    0x40819e7b,
    0x40822990,
    0x40829a39,
    0x4083205e,
    0x4083a320,
    0x40841ccf,
    0x4084a0bb,
    0x40852140,
    0x4085a256,
    0x408621b2,
    0x40869ee4,
    0x408729d6,
    0x4087a287,
    0x40881a9a,
    0x4088a40e,
    0x40891ae9,
    0x40899a76,
    0x408a26c5,
    0x408a9884,
    0x408b2c53,
    0x408baa26,
    0x408c2150,
    0x408c98a0,
    0x408d1d12,
    0x408d9ce3,
    0x408e1e2c,
    0x41f42597,
    0x41f92629,
    0x41fe251c,
    0x41fea711,
    0x41ff2802,
    0x420325b0,
    0x420825d2,
    0x4208a60e,
    0x42092500,
    0x4209a648,
    0x420a2557,
    0x420aa537,
    0x420b2577,
    0x420ba5f0,
    0x420c281e,
    0x420ca6de,
    0x420d26f8,
    0x420da72f,
    0x42122749,
    0x421727e5,
    0x4217a78b,
    0x421c27ad,
    0x421f2768,
    0x42212835,
    0x422627c8,
    0x422b2904,
    0x422ba8b2,
    0x422c28ec,
    0x422ca871,
    0x422d2850,
    0x422da8d1,
    0x422e2897,
    0x422ea9bd,
    0x4432072b,
    0x4432873a,
    0x44330746,
    0x44338754,
    0x44340767,
    0x44348778,
    0x4435077f,
    0x44358789,
    0x4436079c,
    0x443687b2,
    0x443707c4,
    0x443787d1,
    0x443807e0,
    0x443887e8,
    0x44390800,
    0x4439880e,
    0x443a0821,
    0x483212a5,
    0x483292b7,
    0x483312cd,
    0x483392e6,
    0x4c32130b,
    0x4c32931b,
    0x4c33132e,
    0x4c33934e,
    0x4c3400ac,
    0x4c3480ea,
    0x4c35135a,
    0x4c359368,
    0x4c361384,
    0x4c369397,
    0x4c3713a6,
    0x4c3793b4,
    0x4c3813c9,
    0x4c3893d5,
    0x4c3913f5,
    0x4c39941f,
    0x4c3a1438,
    0x4c3a9451,
    0x4c3b05fb,
    0x4c3b946a,
    0x4c3c147c,
    0x4c3c948b,
    0x4c3d14a4,
    0x4c3d8c45,
    0x4c3e14fd,
    0x4c3e94b3,
    0x4c3f151f,
    0x4c3f927b,
    0x4c4014c9,
    0x4c4092f7,
    0x4c4114ed,
    0x50322eb1,
    0x5032aec0,
    0x50332ecb,
    0x5033aedb,
    0x50342ef4,
    0x5034af0e,
    0x50352f1c,
    0x5035af32,
    0x50362f44,
    0x5036af5a,
    0x50372f73,
    0x5037af86,
    0x50382f9e,
    0x5038afaf,
    0x50392fc4,
    0x5039afd8,
    0x503a2ff8,
    0x503ab00e,
    0x503b3026,
    0x503bb038,
    0x503c3054,
    0x503cb06b,
    0x503d3084,
    0x503db09a,
    0x503e30a7,
    0x503eb0bd,
    0x503f30cf,
    0x503f8382,
    0x504030e2,
    0x5040b0f2,
    0x5041310c,
    0x5041b11b,
    0x50423135,
    0x5042b152,
    0x50433162,
    0x5043b172,
    0x50443181,
    0x5044843f,
    0x50453195,
    0x5045b1b3,
    0x504631c6,
    0x5046b1dc,
    0x504731ee,
    0x5047b203,
    0x50483229,
    0x5048b237,
    0x5049324a,
    0x5049b25f,
    0x504a3275,
    0x504ab285,
    0x504b32a5,
    0x504bb2b8,
    0x504c32db,
    0x504cb309,
    0x504d331b,
    0x504db338,
    0x504e3353,
    0x504eb36f,
    0x504f3381,
    0x504fb398,
    0x505033a7,
    0x505086ef,
    0x505133ba,
    0x58320f3a,
    0x68320efc,
    0x68328c6a,
    0x68330c7d,
    0x68338f0a,
    0x68340f1a,
    0x683480ea,
    0x6c320ed8,
    0x6c328c34,
    0x6c330ee3,
    0x74320a19,
    0x743280ac,
    0x74330c45,
    0x7832097e,
    0x78328993,
    0x7833099f,
    0x78338083,
    0x783409ae,
    0x783489c3,
    0x783509e2,
    0x78358a04,
    0x78360a19,
    0x78368a2f,
    0x78370a3f,
    0x78378a60,
    0x78380a73,
    0x78388a85,
    0x78390a92,
    0x78398ab1,
    0x783a0ac6,
    0x783a8ad4,
    0x783b0ade,
    0x783b8af2,
    0x783c0b09,
    0x783c8b1e,
    0x783d0b35,
    0x783d8b4a,
    0x783e0aa0,
    0x783e8a52,
    0x7c321194,
};

const size_t kOpenSSLReasonValuesLen = sizeof(kOpenSSLReasonValues) / sizeof(kOpenSSLReasonValues[0]);

const char kOpenSSLReasonStringData[] =
    "ASN1_LENGTH_MISMATCH\0"
    "AUX_ERROR\0"
    "BAD_GET_ASN1_OBJECT_CALL\0"
    "BAD_OBJECT_HEADER\0"
    "BMPSTRING_IS_WRONG_LENGTH\0"
    "BN_LIB\0"
    "BOOLEAN_IS_WRONG_LENGTH\0"
    "BUFFER_TOO_SMALL\0"
    "CONTEXT_NOT_INITIALISED\0"
    "DECODE_ERROR\0"
    "DEPTH_EXCEEDED\0"
    "DIGEST_AND_KEY_TYPE_NOT_SUPPORTED\0"
    "ENCODE_ERROR\0"
    "ERROR_GETTING_TIME\0"
    "EXPECTING_AN_ASN1_SEQUENCE\0"
    "EXPECTING_AN_INTEGER\0"
    "EXPECTING_AN_OBJECT\0"
    "EXPECTING_A_BOOLEAN\0"
    "EXPECTING_A_TIME\0"
    "EXPLICIT_LENGTH_MISMATCH\0"
    "EXPLICIT_TAG_NOT_CONSTRUCTED\0"
    "FIELD_MISSING\0"
    "FIRST_NUM_TOO_LARGE\0"
    "HEADER_TOO_LONG\0"
    "ILLEGAL_BITSTRING_FORMAT\0"
    "ILLEGAL_BOOLEAN\0"
    "ILLEGAL_CHARACTERS\0"
    "ILLEGAL_FORMAT\0"
    "ILLEGAL_HEX\0"
    "ILLEGAL_IMPLICIT_TAG\0"
    "ILLEGAL_INTEGER\0"
    "ILLEGAL_NESTED_TAGGING\0"
    "ILLEGAL_NULL\0"
    "ILLEGAL_NULL_VALUE\0"
    "ILLEGAL_OBJECT\0"
    "ILLEGAL_OPTIONAL_ANY\0"
    "ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE\0"
    "ILLEGAL_TAGGED_ANY\0"
    "ILLEGAL_TIME_VALUE\0"
    "INTEGER_NOT_ASCII_FORMAT\0"
    "INTEGER_TOO_LARGE_FOR_LONG\0"
    "INVALID_BIT_STRING_BITS_LEFT\0"
    "INVALID_BMPSTRING_LENGTH\0"
    "INVALID_DIGIT\0"
    "INVALID_MODIFIER\0"
    "INVALID_NUMBER\0"
    "INVALID_OBJECT_ENCODING\0"
    "INVALID_SEPARATOR\0"
    "INVALID_TIME_FORMAT\0"
    "INVALID_UNIVERSALSTRING_LENGTH\0"
    "INVALID_UTF8STRING\0"
    "LIST_ERROR\0"
    "MISSING_ASN1_EOS\0"
    "MISSING_EOC\0"
    "MISSING_SECOND_NUMBER\0"
    "MISSING_VALUE\0"
    "MSTRING_NOT_UNIVERSAL\0"
    "MSTRING_WRONG_TAG\0"
    "NESTED_ASN1_ERROR\0"
    "NESTED_ASN1_STRING\0"
    "NON_HEX_CHARACTERS\0"
    "NOT_ASCII_FORMAT\0"
    "NOT_ENOUGH_DATA\0"
    "NO_MATCHING_CHOICE_TYPE\0"
    "NULL_IS_WRONG_LENGTH\0"
    "OBJECT_NOT_ASCII_FORMAT\0"
    "ODD_NUMBER_OF_CHARS\0"
    "SECOND_NUMBER_TOO_LARGE\0"
    "SEQUENCE_LENGTH_MISMATCH\0"
    "SEQUENCE_NOT_CONSTRUCTED\0"
    "SEQUENCE_OR_SET_NEEDS_CONFIG\0"
    "SHORT_LINE\0"
    "STREAMING_NOT_SUPPORTED\0"
    "STRING_TOO_LONG\0"
    "STRING_TOO_SHORT\0"
    "TAG_VALUE_TOO_HIGH\0"
    "TIME_NOT_ASCII_FORMAT\0"
    "TOO_LONG\0"
    "TYPE_NOT_CONSTRUCTED\0"
    "TYPE_NOT_PRIMITIVE\0"
    "UNEXPECTED_EOC\0"
    "UNIVERSALSTRING_IS_WRONG_LENGTH\0"
    "UNKNOWN_FORMAT\0"
    "UNKNOWN_MESSAGE_DIGEST_ALGORITHM\0"
    "UNKNOWN_SIGNATURE_ALGORITHM\0"
    "UNKNOWN_TAG\0"
    "UNSUPPORTED_ANY_DEFINED_BY_TYPE\0"
    "UNSUPPORTED_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_TYPE\0"
    "WRONG_PUBLIC_KEY_TYPE\0"
    "WRONG_TAG\0"
    "WRONG_TYPE\0"
    "BAD_FOPEN_MODE\0"
    "BROKEN_PIPE\0"
    "CONNECT_ERROR\0"
    "ERROR_SETTING_NBIO\0"
    "INVALID_ARGUMENT\0"
    "IN_USE\0"
    "KEEPALIVE\0"
    "NBIO_CONNECT_ERROR\0"
    "NO_HOSTNAME_SPECIFIED\0"
    "NO_PORT_SPECIFIED\0"
    "NO_SUCH_FILE\0"
    "NULL_PARAMETER\0"
    "SYS_LIB\0"
    "UNABLE_TO_CREATE_SOCKET\0"
    "UNINITIALIZED\0"
    "UNSUPPORTED_METHOD\0"
    "WRITE_TO_READ_ONLY_BIO\0"
    "ARG2_LT_ARG3\0"
    "BAD_ENCODING\0"
    "BAD_RECIPROCAL\0"
    "BIGNUM_TOO_LONG\0"
    "BITS_TOO_SMALL\0"
    "CALLED_WITH_EVEN_MODULUS\0"
    "DIV_BY_ZERO\0"
    "EXPAND_ON_STATIC_BIGNUM_DATA\0"
    "INPUT_NOT_REDUCED\0"
    "INVALID_INPUT\0"
    "INVALID_RANGE\0"
    "NEGATIVE_NUMBER\0"
    "NOT_A_SQUARE\0"
    "NOT_INITIALIZED\0"
    "NO_INVERSE\0"
    "PRIVATE_KEY_TOO_LARGE\0"
    "P_IS_NOT_PRIME\0"
    "TOO_MANY_ITERATIONS\0"
    "TOO_MANY_TEMPORARY_VARIABLES\0"
    "AES_KEY_SETUP_FAILED\0"
    "BAD_DECRYPT\0"
    "BAD_KEY_LENGTH\0"
    "CTRL_NOT_IMPLEMENTED\0"
    "CTRL_OPERATION_NOT_IMPLEMENTED\0"
    "DATA_NOT_MULTIPLE_OF_BLOCK_LENGTH\0"
    "INITIALIZATION_ERROR\0"
    "INPUT_NOT_INITIALIZED\0"
    "INVALID_AD_SIZE\0"
    "INVALID_KEY_LENGTH\0"
    "INVALID_NONCE\0"
    "INVALID_NONCE_SIZE\0"
    "INVALID_OPERATION\0"
    "IV_TOO_LARGE\0"
    "NO_CIPHER_SET\0"
    "NO_DIRECTION_SET\0"
    "OUTPUT_ALIASES_INPUT\0"
    "TAG_TOO_LARGE\0"
    "TOO_LARGE\0"
    "UNSUPPORTED_AD_SIZE\0"
    "UNSUPPORTED_INPUT_SIZE\0"
    "UNSUPPORTED_KEY_SIZE\0"
    "UNSUPPORTED_NONCE_SIZE\0"
    "UNSUPPORTED_TAG_SIZE\0"
    "WRONG_FINAL_BLOCK_LENGTH\0"
    "LIST_CANNOT_BE_NULL\0"
    "MISSING_CLOSE_SQUARE_BRACKET\0"
    "MISSING_EQUAL_SIGN\0"
    "NO_CLOSE_BRACE\0"
    "UNABLE_TO_CREATE_NEW_SECTION\0"
    "VARIABLE_EXPANSION_TOO_LONG\0"
    "VARIABLE_HAS_NO_VALUE\0"
    "BAD_GENERATOR\0"
    "INVALID_PUBKEY\0"
    "MODULUS_TOO_LARGE\0"
    "NO_PRIVATE_VALUE\0"
    "UNKNOWN_HASH\0"
    "BAD_Q_VALUE\0"
    "BAD_VERSION\0"
    "MISSING_PARAMETERS\0"
    "NEED_NEW_SETUP_VALUES\0"
    "BIGNUM_OUT_OF_RANGE\0"
    "COORDINATES_OUT_OF_RANGE\0"
    "D2I_ECPKPARAMETERS_FAILURE\0"
    "EC_GROUP_NEW_BY_NAME_FAILURE\0"
    "GROUP2PKPARAMETERS_FAILURE\0"
    "GROUP_MISMATCH\0"
    "I2D_ECPKPARAMETERS_FAILURE\0"
    "INCOMPATIBLE_OBJECTS\0"
    "INVALID_COFACTOR\0"
    "INVALID_COMPRESSED_POINT\0"
    "INVALID_COMPRESSION_BIT\0"
    "INVALID_ENCODING\0"
    "INVALID_FIELD\0"
    "INVALID_FORM\0"
    "INVALID_GROUP_ORDER\0"
    "INVALID_PRIVATE_KEY\0"
    "INVALID_SCALAR\0"
    "MISSING_PRIVATE_KEY\0"
    "NON_NAMED_CURVE\0"
    "PKPARAMETERS2GROUP_FAILURE\0"
    "POINT_AT_INFINITY\0"
    "POINT_IS_NOT_ON_CURVE\0"
    "PUBLIC_KEY_VALIDATION_FAILED\0"
    "SLOT_FULL\0"
    "UNDEFINED_GENERATOR\0"
    "UNKNOWN_GROUP\0"
    "UNKNOWN_ORDER\0"
    "WRONG_CURVE_PARAMETERS\0"
    "WRONG_ORDER\0"
    "KDF_FAILED\0"
    "POINT_ARITHMETIC_FAILURE\0"
    "BAD_SIGNATURE\0"
    "NOT_IMPLEMENTED\0"
    "RANDOM_NUMBER_GENERATION_FAILED\0"
    "OPERATION_NOT_SUPPORTED\0"
    "COMMAND_NOT_SUPPORTED\0"
    "DIFFERENT_KEY_TYPES\0"
    "DIFFERENT_PARAMETERS\0"
    "EXPECTING_AN_EC_KEY_KEY\0"
    "EXPECTING_AN_RSA_KEY\0"
    "EXPECTING_A_DSA_KEY\0"
    "ILLEGAL_OR_UNSUPPORTED_PADDING_MODE\0"
    "INVALID_DIGEST_LENGTH\0"
    "INVALID_DIGEST_TYPE\0"
    "INVALID_KEYBITS\0"
    "INVALID_MGF1_MD\0"
    "INVALID_PADDING_MODE\0"
    "INVALID_PARAMETERS\0"
    "INVALID_PSS_SALTLEN\0"
    "INVALID_SIGNATURE\0"
    "KEYS_NOT_SET\0"
    "MEMORY_LIMIT_EXCEEDED\0"
    "NOT_A_PRIVATE_KEY\0"
    "NO_DEFAULT_DIGEST\0"
    "NO_KEY_SET\0"
    "NO_MDC2_SUPPORT\0"
    "NO_NID_FOR_CURVE\0"
    "NO_OPERATION_SET\0"
    "NO_PARAMETERS_SET\0"
    "OPERATION_NOT_SUPPORTED_FOR_THIS_KEYTYPE\0"
    "OPERATON_NOT_INITIALIZED\0"
    "UNKNOWN_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_ALGORITHM\0"
    "OUTPUT_TOO_LARGE\0"
    "INVALID_OID_STRING\0"
    "UNKNOWN_NID\0"
    "BAD_BASE64_DECODE\0"
    "BAD_END_LINE\0"
    "BAD_IV_CHARS\0"
    "BAD_PASSWORD_READ\0"
    "CIPHER_IS_NULL\0"
    "ERROR_CONVERTING_PRIVATE_KEY\0"
    "NOT_DEK_INFO\0"
    "NOT_ENCRYPTED\0"
    "NOT_PROC_TYPE\0"
    "NO_START_LINE\0"
    "READ_KEY\0"
    "SHORT_HEADER\0"
    "UNSUPPORTED_CIPHER\0"
    "UNSUPPORTED_ENCRYPTION\0"
    "BAD_PKCS7_VERSION\0"
    "NOT_PKCS7_SIGNED_DATA\0"
    "NO_CERTIFICATES_INCLUDED\0"
    "NO_CRLS_INCLUDED\0"
    "BAD_ITERATION_COUNT\0"
    "BAD_PKCS12_DATA\0"
    "BAD_PKCS12_VERSION\0"
    "CIPHER_HAS_NO_OBJECT_IDENTIFIER\0"
    "CRYPT_ERROR\0"
    "ENCRYPT_ERROR\0"
    "ERROR_SETTING_CIPHER_PARAMS\0"
    "INCORRECT_PASSWORD\0"
    "KEYGEN_FAILURE\0"
    "KEY_GEN_ERROR\0"
    "METHOD_NOT_SUPPORTED\0"
    "MISSING_MAC\0"
    "MULTIPLE_PRIVATE_KEYS_IN_PKCS12\0"
    "PKCS12_PUBLIC_KEY_INTEGRITY_NOT_SUPPORTED\0"
    "PKCS12_TOO_DEEPLY_NESTED\0"
    "PRIVATE_KEY_DECODE_ERROR\0"
    "PRIVATE_KEY_ENCODE_ERROR\0"
    "UNKNOWN_ALGORITHM\0"
    "UNKNOWN_CIPHER\0"
    "UNKNOWN_CIPHER_ALGORITHM\0"
    "UNKNOWN_DIGEST\0"
    "UNSUPPORTED_KEYLENGTH\0"
    "UNSUPPORTED_KEY_DERIVATION_FUNCTION\0"
    "UNSUPPORTED_PRF\0"
    "UNSUPPORTED_PRIVATE_KEY_ALGORITHM\0"
    "UNSUPPORTED_SALT_TYPE\0"
    "BAD_E_VALUE\0"
    "BAD_FIXED_HEADER_DECRYPT\0"
    "BAD_PAD_BYTE_COUNT\0"
    "BAD_RSA_PARAMETERS\0"
    "BLOCK_TYPE_IS_NOT_01\0"
    "BN_NOT_INITIALIZED\0"
    "CANNOT_RECOVER_MULTI_PRIME_KEY\0"
    "CRT_PARAMS_ALREADY_GIVEN\0"
    "CRT_VALUES_INCORRECT\0"
    "DATA_LEN_NOT_EQUAL_TO_MOD_LEN\0"
    "DATA_TOO_LARGE\0"
    "DATA_TOO_LARGE_FOR_KEY_SIZE\0"
    "DATA_TOO_LARGE_FOR_MODULUS\0"
    "DATA_TOO_SMALL\0"
    "DATA_TOO_SMALL_FOR_KEY_SIZE\0"
    "DIGEST_TOO_BIG_FOR_RSA_KEY\0"
    "D_E_NOT_CONGRUENT_TO_1\0"
    "EMPTY_PUBLIC_KEY\0"
    "FIRST_OCTET_INVALID\0"
    "INCONSISTENT_SET_OF_CRT_VALUES\0"
    "INTERNAL_ERROR\0"
    "INVALID_MESSAGE_LENGTH\0"
    "KEY_SIZE_TOO_SMALL\0"
    "LAST_OCTET_INVALID\0"
    "MUST_HAVE_AT_LEAST_TWO_PRIMES\0"
    "NO_PUBLIC_EXPONENT\0"
    "NULL_BEFORE_BLOCK_MISSING\0"
    "N_NOT_EQUAL_P_Q\0"
    "OAEP_DECODING_ERROR\0"
    "ONLY_ONE_OF_P_Q_GIVEN\0"
    "OUTPUT_BUFFER_TOO_SMALL\0"
    "PADDING_CHECK_FAILED\0"
    "PKCS_DECODING_ERROR\0"
    "SLEN_CHECK_FAILED\0"
    "SLEN_RECOVERY_FAILED\0"
    "UNKNOWN_ALGORITHM_TYPE\0"
    "UNKNOWN_PADDING_TYPE\0"
    "VALUE_MISSING\0"
    "WRONG_SIGNATURE_LENGTH\0"
    "ALPN_MISMATCH_ON_EARLY_DATA\0"
    "APPLICATION_DATA_INSTEAD_OF_HANDSHAKE\0"
    "APP_DATA_IN_HANDSHAKE\0"
    "ATTEMPT_TO_REUSE_SESSION_IN_DIFFERENT_CONTEXT\0"
    "BAD_ALERT\0"
    "BAD_CHANGE_CIPHER_SPEC\0"
    "BAD_DATA_RETURNED_BY_CALLBACK\0"
    "BAD_DH_P_LENGTH\0"
    "BAD_DIGEST_LENGTH\0"
    "BAD_ECC_CERT\0"
    "BAD_ECPOINT\0"
    "BAD_HANDSHAKE_RECORD\0"
    "BAD_HELLO_REQUEST\0"
    "BAD_LENGTH\0"
    "BAD_PACKET_LENGTH\0"
    "BAD_RSA_ENCRYPT\0"
    "BAD_SRTP_MKI_VALUE\0"
    "BAD_SRTP_PROTECTION_PROFILE_LIST\0"
    "BAD_SSL_FILETYPE\0"
    "BAD_WRITE_RETRY\0"
    "BIO_NOT_SET\0"
    "BLOCK_CIPHER_PAD_IS_WRONG\0"
    "BUFFERED_MESSAGES_ON_CIPHER_CHANGE\0"
    "CANNOT_HAVE_BOTH_PRIVKEY_AND_METHOD\0"
    "CANNOT_PARSE_LEAF_CERT\0"
    "CA_DN_LENGTH_MISMATCH\0"
    "CA_DN_TOO_LONG\0"
    "CCS_RECEIVED_EARLY\0"
    "CERTIFICATE_AND_PRIVATE_KEY_MISMATCH\0"
    "CERTIFICATE_VERIFY_FAILED\0"
    "CERT_CB_ERROR\0"
    "CERT_LENGTH_MISMATCH\0"
    "CHANNEL_ID_NOT_P256\0"
    "CHANNEL_ID_SIGNATURE_INVALID\0"
    "CIPHER_OR_HASH_UNAVAILABLE\0"
    "CLIENTHELLO_PARSE_FAILED\0"
    "CLIENTHELLO_TLSEXT\0"
    "CONNECTION_REJECTED\0"
    "CONNECTION_TYPE_NOT_SET\0"
    "CUSTOM_EXTENSION_ERROR\0"
    "DATA_LENGTH_TOO_LONG\0"
    "DECRYPTION_FAILED\0"
    "DECRYPTION_FAILED_OR_BAD_RECORD_MAC\0"
    "DH_PUBLIC_VALUE_LENGTH_IS_WRONG\0"
    "DH_P_TOO_LONG\0"
    "DIGEST_CHECK_FAILED\0"
    "DOWNGRADE_DETECTED\0"
    "DTLS_MESSAGE_TOO_BIG\0"
    "DUPLICATE_EXTENSION\0"
    "DUPLICATE_KEY_SHARE\0"
    "EARLY_DATA_NOT_IN_USE\0"
    "ECC_CERT_NOT_FOR_SIGNING\0"
    "EMPTY_HELLO_RETRY_REQUEST\0"
    "EMS_STATE_INCONSISTENT\0"
    "ENCRYPTED_LENGTH_TOO_LONG\0"
    "ERROR_ADDING_EXTENSION\0"
    "ERROR_IN_RECEIVED_CIPHER_LIST\0"
    "ERROR_PARSING_EXTENSION\0"
    "EXCESSIVE_MESSAGE_SIZE\0"
    "EXTRA_DATA_IN_MESSAGE\0"
    "FRAGMENT_MISMATCH\0"
    "GOT_NEXT_PROTO_WITHOUT_EXTENSION\0"
    "HANDSHAKE_FAILURE_ON_CLIENT_HELLO\0"
    "HANDSHAKE_NOT_COMPLETE\0"
    "HTTPS_PROXY_REQUEST\0"
    "HTTP_REQUEST\0"
    "INAPPROPRIATE_FALLBACK\0"
    "INVALID_ALPN_PROTOCOL\0"
    "INVALID_COMMAND\0"
    "INVALID_COMPRESSION_LIST\0"
    "INVALID_MESSAGE\0"
    "INVALID_OUTER_RECORD_TYPE\0"
    "INVALID_SCT_LIST\0"
    "INVALID_SSL_SESSION\0"
    "INVALID_TICKET_KEYS_LENGTH\0"
    "LENGTH_MISMATCH\0"
    "MISSING_EXTENSION\0"
    "MISSING_KEY_SHARE\0"
    "MISSING_RSA_CERTIFICATE\0"
    "MISSING_TMP_DH_KEY\0"
    "MISSING_TMP_ECDH_KEY\0"
    "MIXED_SPECIAL_OPERATOR_WITH_GROUPS\0"
    "MTU_TOO_SMALL\0"
    "NEGOTIATED_BOTH_NPN_AND_ALPN\0"
    "NESTED_GROUP\0"
    "NO_CERTIFICATES_RETURNED\0"
    "NO_CERTIFICATE_ASSIGNED\0"
    "NO_CERTIFICATE_SET\0"
    "NO_CIPHERS_AVAILABLE\0"
    "NO_CIPHERS_PASSED\0"
    "NO_CIPHERS_SPECIFIED\0"
    "NO_CIPHER_MATCH\0"
    "NO_COMMON_SIGNATURE_ALGORITHMS\0"
    "NO_COMPRESSION_SPECIFIED\0"
    "NO_GROUPS_SPECIFIED\0"
    "NO_METHOD_SPECIFIED\0"
    "NO_P256_SUPPORT\0"
    "NO_PRIVATE_KEY_ASSIGNED\0"
    "NO_RENEGOTIATION\0"
    "NO_REQUIRED_DIGEST\0"
    "NO_SHARED_CIPHER\0"
    "NO_SHARED_GROUP\0"
    "NO_SUPPORTED_VERSIONS_ENABLED\0"
    "NULL_SSL_CTX\0"
    "NULL_SSL_METHOD_PASSED\0"
    "OLD_SESSION_CIPHER_NOT_RETURNED\0"
    "OLD_SESSION_PRF_HASH_MISMATCH\0"
    "OLD_SESSION_VERSION_NOT_RETURNED\0"
    "PARSE_TLSEXT\0"
    "PATH_TOO_LONG\0"
    "PEER_DID_NOT_RETURN_A_CERTIFICATE\0"
    "PEER_ERROR_UNSUPPORTED_CERTIFICATE_TYPE\0"
    "PRE_SHARED_KEY_MUST_BE_LAST\0"
    "PROTOCOL_IS_SHUTDOWN\0"
    "PSK_IDENTITY_BINDER_COUNT_MISMATCH\0"
    "PSK_IDENTITY_NOT_FOUND\0"
    "PSK_NO_CLIENT_CB\0"
    "PSK_NO_SERVER_CB\0"
    "READ_TIMEOUT_EXPIRED\0"
    "RECORD_LENGTH_MISMATCH\0"
    "RECORD_TOO_LARGE\0"
    "RENEGOTIATION_EMS_MISMATCH\0"
    "RENEGOTIATION_ENCODING_ERR\0"
    "RENEGOTIATION_MISMATCH\0"
    "REQUIRED_CIPHER_MISSING\0"
    "RESUMED_EMS_SESSION_WITHOUT_EMS_EXTENSION\0"
    "RESUMED_NON_EMS_SESSION_WITH_EMS_EXTENSION\0"
    "SCSV_RECEIVED_WHEN_RENEGOTIATING\0"
    "SERVERHELLO_TLSEXT\0"
    "SERVER_CERT_CHANGED\0"
    "SESSION_ID_CONTEXT_UNINITIALIZED\0"
    "SESSION_MAY_NOT_BE_CREATED\0"
    "SHUTDOWN_WHILE_IN_INIT\0"
    "SIGNATURE_ALGORITHMS_EXTENSION_SENT_BY_SERVER\0"
    "SRTP_COULD_NOT_ALLOCATE_PROFILES\0"
    "SRTP_UNKNOWN_PROTECTION_PROFILE\0"
    "SSL3_EXT_INVALID_SERVERNAME\0"
    "SSLV3_ALERT_BAD_CERTIFICATE\0"
    "SSLV3_ALERT_BAD_RECORD_MAC\0"
    "SSLV3_ALERT_CERTIFICATE_EXPIRED\0"
    "SSLV3_ALERT_CERTIFICATE_REVOKED\0"
    "SSLV3_ALERT_CERTIFICATE_UNKNOWN\0"
    "SSLV3_ALERT_CLOSE_NOTIFY\0"
    "SSLV3_ALERT_DECOMPRESSION_FAILURE\0"
    "SSLV3_ALERT_HANDSHAKE_FAILURE\0"
    "SSLV3_ALERT_ILLEGAL_PARAMETER\0"
    "SSLV3_ALERT_NO_CERTIFICATE\0"
    "SSLV3_ALERT_UNEXPECTED_MESSAGE\0"
    "SSLV3_ALERT_UNSUPPORTED_CERTIFICATE\0"
    "SSL_CTX_HAS_NO_DEFAULT_SSL_VERSION\0"
    "SSL_HANDSHAKE_FAILURE\0"
    "SSL_SESSION_ID_CONTEXT_TOO_LONG\0"
    "TICKET_ENCRYPTION_FAILED\0"
    "TLSV1_ALERT_ACCESS_DENIED\0"
    "TLSV1_ALERT_DECODE_ERROR\0"
    "TLSV1_ALERT_DECRYPTION_FAILED\0"
    "TLSV1_ALERT_DECRYPT_ERROR\0"
    "TLSV1_ALERT_EXPORT_RESTRICTION\0"
    "TLSV1_ALERT_INAPPROPRIATE_FALLBACK\0"
    "TLSV1_ALERT_INSUFFICIENT_SECURITY\0"
    "TLSV1_ALERT_INTERNAL_ERROR\0"
    "TLSV1_ALERT_NO_RENEGOTIATION\0"
    "TLSV1_ALERT_PROTOCOL_VERSION\0"
    "TLSV1_ALERT_RECORD_OVERFLOW\0"
    "TLSV1_ALERT_UNKNOWN_CA\0"
    "TLSV1_ALERT_USER_CANCELLED\0"
    "TLSV1_BAD_CERTIFICATE_HASH_VALUE\0"
    "TLSV1_BAD_CERTIFICATE_STATUS_RESPONSE\0"
    "TLSV1_CERTIFICATE_REQUIRED\0"
    "TLSV1_CERTIFICATE_UNOBTAINABLE\0"
    "TLSV1_UNKNOWN_PSK_IDENTITY\0"
    "TLSV1_UNRECOGNIZED_NAME\0"
    "TLSV1_UNSUPPORTED_EXTENSION\0"
    "TLS_PEER_DID_NOT_RESPOND_WITH_CERTIFICATE_LIST\0"
    "TLS_RSA_ENCRYPTED_VALUE_LENGTH_IS_WRONG\0"
    "TOO_MANY_EMPTY_FRAGMENTS\0"
    "TOO_MANY_KEY_UPDATES\0"
    "TOO_MANY_WARNING_ALERTS\0"
    "TOO_MUCH_READ_EARLY_DATA\0"
    "TOO_MUCH_SKIPPED_EARLY_DATA\0"
    "UNABLE_TO_FIND_ECDH_PARAMETERS\0"
    "UNEXPECTED_EXTENSION\0"
    "UNEXPECTED_EXTENSION_ON_EARLY_DATA\0"
    "UNEXPECTED_MESSAGE\0"
    "UNEXPECTED_OPERATOR_IN_GROUP\0"
    "UNEXPECTED_RECORD\0"
    "UNKNOWN_ALERT_TYPE\0"
    "UNKNOWN_CERTIFICATE_TYPE\0"
    "UNKNOWN_CIPHER_RETURNED\0"
    "UNKNOWN_CIPHER_TYPE\0"
    "UNKNOWN_KEY_EXCHANGE_TYPE\0"
    "UNKNOWN_PROTOCOL\0"
    "UNKNOWN_SSL_VERSION\0"
    "UNKNOWN_STATE\0"
    "UNSAFE_LEGACY_RENEGOTIATION_DISABLED\0"
    "UNSUPPORTED_COMPRESSION_ALGORITHM\0"
    "UNSUPPORTED_ELLIPTIC_CURVE\0"
    "UNSUPPORTED_PROTOCOL\0"
    "UNSUPPORTED_PROTOCOL_FOR_CUSTOM_KEY\0"
    "WRONG_CERTIFICATE_TYPE\0"
    "WRONG_CIPHER_RETURNED\0"
    "WRONG_CURVE\0"
    "WRONG_MESSAGE_TYPE\0"
    "WRONG_SIGNATURE_TYPE\0"
    "WRONG_SSL_VERSION\0"
    "WRONG_VERSION_NUMBER\0"
    "WRONG_VERSION_ON_EARLY_DATA\0"
    "X509_LIB\0"
    "X509_VERIFICATION_SETUP_PROBLEMS\0"
    "AKID_MISMATCH\0"
    "BAD_X509_FILETYPE\0"
    "BASE64_DECODE_ERROR\0"
    "CANT_CHECK_DH_KEY\0"
    "CERT_ALREADY_IN_HASH_TABLE\0"
    "CRL_ALREADY_DELTA\0"
    "CRL_VERIFY_FAILURE\0"
    "IDP_MISMATCH\0"
    "INVALID_DIRECTORY\0"
    "INVALID_FIELD_NAME\0"
    "INVALID_PARAMETER\0"
    "INVALID_PSS_PARAMETERS\0"
    "INVALID_TRUST\0"
    "ISSUER_MISMATCH\0"
    "KEY_TYPE_MISMATCH\0"
    "KEY_VALUES_MISMATCH\0"
    "LOADING_CERT_DIR\0"
    "LOADING_DEFAULTS\0"
    "NAME_TOO_LONG\0"
    "NEWER_CRL_NOT_NEWER\0"
    "NO_CERT_SET_FOR_US_TO_VERIFY\0"
    "NO_CRL_NUMBER\0"
    "PUBLIC_KEY_DECODE_ERROR\0"
    "PUBLIC_KEY_ENCODE_ERROR\0"
    "SHOULD_RETRY\0"
    "UNKNOWN_KEY_TYPE\0"
    "UNKNOWN_PURPOSE_ID\0"
    "UNKNOWN_TRUST_ID\0"
    "WRONG_LOOKUP_TYPE\0"
    "BAD_IP_ADDRESS\0"
    "BAD_OBJECT\0"
    "BN_DEC2BN_ERROR\0"
    "BN_TO_ASN1_INTEGER_ERROR\0"
    "CANNOT_FIND_FREE_FUNCTION\0"
    "DIRNAME_ERROR\0"
    "DISTPOINT_ALREADY_SET\0"
    "DUPLICATE_ZONE_ID\0"
    "ERROR_CONVERTING_ZONE\0"
    "ERROR_CREATING_EXTENSION\0"
    "ERROR_IN_EXTENSION\0"
    "EXPECTED_A_SECTION_NAME\0"
    "EXTENSION_EXISTS\0"
    "EXTENSION_NAME_ERROR\0"
    "EXTENSION_NOT_FOUND\0"
    "EXTENSION_SETTING_NOT_SUPPORTED\0"
    "EXTENSION_VALUE_ERROR\0"
    "ILLEGAL_EMPTY_EXTENSION\0"
    "ILLEGAL_HEX_DIGIT\0"
    "INCORRECT_POLICY_SYNTAX_TAG\0"
    "INVALID_BOOLEAN_STRING\0"
    "INVALID_EXTENSION_STRING\0"
    "INVALID_MULTIPLE_RDNS\0"
    "INVALID_NAME\0"
    "INVALID_NULL_ARGUMENT\0"
    "INVALID_NULL_NAME\0"
    "INVALID_NULL_VALUE\0"
    "INVALID_NUMBERS\0"
    "INVALID_OBJECT_IDENTIFIER\0"
    "INVALID_OPTION\0"
    "INVALID_POLICY_IDENTIFIER\0"
    "INVALID_PROXY_POLICY_SETTING\0"
    "INVALID_PURPOSE\0"
    "INVALID_SECTION\0"
    "INVALID_SYNTAX\0"
    "ISSUER_DECODE_ERROR\0"
    "NEED_ORGANIZATION_AND_NUMBERS\0"
    "NO_CONFIG_DATABASE\0"
    "NO_ISSUER_CERTIFICATE\0"
    "NO_ISSUER_DETAILS\0"
    "NO_POLICY_IDENTIFIER\0"
    "NO_PROXY_CERT_POLICY_LANGUAGE_DEFINED\0"
    "NO_PUBLIC_KEY\0"
    "NO_SUBJECT_DETAILS\0"
    "ODD_NUMBER_OF_DIGITS\0"
    "OPERATION_NOT_DEFINED\0"
    "OTHERNAME_ERROR\0"
    "POLICY_LANGUAGE_ALREADY_DEFINED\0"
    "POLICY_PATH_LENGTH\0"
    "POLICY_PATH_LENGTH_ALREADY_DEFINED\0"
    "POLICY_WHEN_PROXY_LANGUAGE_REQUIRES_NO_POLICY\0"
    "SECTION_NOT_FOUND\0"
    "UNABLE_TO_GET_ISSUER_DETAILS\0"
    "UNABLE_TO_GET_ISSUER_KEYID\0"
    "UNKNOWN_BIT_STRING_ARGUMENT\0"
    "UNKNOWN_EXTENSION\0"
    "UNKNOWN_EXTENSION_NAME\0"
    "UNKNOWN_OPTION\0"
    "UNSUPPORTED_OPTION\0"
    "USER_TOO_LONG\0"
    "";

