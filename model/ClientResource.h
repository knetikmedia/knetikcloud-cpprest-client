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
 * ClientResource.h
 *
 * 
 */

#ifndef ClientResource_H_
#define ClientResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ClientResource
    : public ModelBase
{
public:
    ClientResource();
    virtual ~ClientResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ClientResource members

    /// <summary>
    /// The expiration time of an initial oauth token in seconds
    /// </summary>
    int32_t getAccessTokenValiditySeconds() const;
    bool accessTokenValiditySecondsIsSet() const;
    void unsetAccess_token_validity_seconds();
    void setAccessTokenValiditySeconds(int32_t value);
    /// <summary>
    /// The client_id field of the oauth token request
    /// </summary>
    utility::string_t getClientKey() const;
        void setClientKey(utility::string_t value);
    /// <summary>
    /// The oauth grant type as in: password (username/password auth), client_credentials (server-to-server, private clients), refresh_token (to allow clients to refresh their initial token), facebook, google, etc) See documentation for a complete list. Use dedicated endpoint PUT /grant-types to edit this list
    /// </summary>
    std::vector<utility::string_t>& getGrantTypes();
    bool grantTypesIsSet() const;
    void unsetGrant_types();
    void setGrantTypes(std::vector<utility::string_t> value);
    /// <summary>
    /// Generated unique ID for the client
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// Set to true if the client is public i.e the secret key can be secured
    /// </summary>
    bool getIsPublic() const;
    bool isPublicIsSet() const;
    void unsetIs_public();
    void setIsPublic(bool value);
    /// <summary>
    /// Used to flag system clients that are not meant to be tinkered with
    /// </summary>
    bool getLocked() const;
    bool lockedIsSet() const;
    void unsetLocked();
    void setLocked(bool value);
    /// <summary>
    /// The friendly name of the client
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// A redirection URL to use when granting access to third-parties (seldomly used)
    /// </summary>
    std::vector<utility::string_t>& getRedirectUris();
    bool redirectUrisIsSet() const;
    void unsetRedirect_uris();
    void setRedirectUris(std::vector<utility::string_t> value);
    /// <summary>
    /// The expiration time of a refresh oauth token in seconds
    /// </summary>
    int32_t getRefreshTokenValiditySeconds() const;
    bool refreshTokenValiditySecondsIsSet() const;
    void unsetRefresh_token_validity_seconds();
    void setRefreshTokenValiditySeconds(int32_t value);
    /// <summary>
    /// The client-secret field of the oauth request when creating a private client
    /// </summary>
    utility::string_t getSecret() const;
        void setSecret(utility::string_t value);

protected:
    int32_t m_Access_token_validity_seconds;
    bool m_Access_token_validity_secondsIsSet;
    utility::string_t m_Client_key;
        std::vector<utility::string_t> m_Grant_types;
    bool m_Grant_typesIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    bool m_Is_public;
    bool m_Is_publicIsSet;
    bool m_Locked;
    bool m_LockedIsSet;
    utility::string_t m_Name;
        std::vector<utility::string_t> m_Redirect_uris;
    bool m_Redirect_urisIsSet;
    int32_t m_Refresh_token_validity_seconds;
    bool m_Refresh_token_validity_secondsIsSet;
    utility::string_t m_Secret;
    };

}
}
}
}

#endif /* ClientResource_H_ */
