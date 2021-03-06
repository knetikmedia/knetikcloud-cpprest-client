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
 * MongoDatabaseConfig.h
 *
 * 
 */

#ifndef MongoDatabaseConfig_H_
#define MongoDatabaseConfig_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MongoDatabaseConfig
    : public ModelBase
{
public:
    MongoDatabaseConfig();
    virtual ~MongoDatabaseConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MongoDatabaseConfig members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDbName() const;
    bool dbNameIsSet() const;
    void unsetDb_name();
    void setDbName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOptions() const;
    bool optionsIsSet() const;
    void unsetOptions();
    void setOptions(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPassword() const;
    bool passwordIsSet() const;
    void unsetPassword();
    void setPassword(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getServers() const;
    bool serversIsSet() const;
    void unsetServers();
    void setServers(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUsername() const;
    bool usernameIsSet() const;
    void unsetUsername();
    void setUsername(utility::string_t value);

protected:
    utility::string_t m_Db_name;
    bool m_Db_nameIsSet;
    utility::string_t m_Options;
    bool m_OptionsIsSet;
    utility::string_t m_Password;
    bool m_PasswordIsSet;
    utility::string_t m_Servers;
    bool m_ServersIsSet;
    utility::string_t m_Username;
    bool m_UsernameIsSet;
};

}
}
}
}

#endif /* MongoDatabaseConfig_H_ */
