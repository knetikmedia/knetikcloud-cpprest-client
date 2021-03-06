/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Access_TokenApi.h
 *
 * 
 */

#ifndef Access_TokenApi_H_
#define Access_TokenApi_H_


#include "ApiClient.h"

#include "OAuth2Resource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Access_TokenApi
{
public:
    Access_TokenApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Access_TokenApi();
    /// <summary>
    /// Get access token
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="grantType">Grant type</param>/// <param name="clientId">The id of the client</param>/// <param name="clientSecret">The secret key of the client.  Used only with a grant_type of client_credentials (optional)</param>/// <param name="username">The username of the client. Used only with a grant_type of password (optional)</param>/// <param name="password">The password of the client. Used only with a grant_type of password (optional)</param>/// <param name="token">The 3rd party authentication token. Used only with a grant_type of facebook, google, etc (social plugins) (optional)</param>/// <param name="refreshToken">The refresh token obtained during prior authentication. Used only with a grant_type of refresh_token (optional)</param>
    pplx::task<std::shared_ptr<OAuth2Resource>> getOAuthToken(utility::string_t grantType, utility::string_t clientId, utility::string_t clientSecret, utility::string_t username, utility::string_t password, utility::string_t token, utility::string_t refreshToken);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Access_TokenApi_H_ */

