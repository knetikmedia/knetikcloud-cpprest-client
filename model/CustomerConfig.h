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
 * CustomerConfig.h
 *
 * 
 */

#ifndef CustomerConfig_H_
#define CustomerConfig_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "S3Config.h"
#include "DatabaseConfig.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CustomerConfig
    : public ModelBase
{
public:
    CustomerConfig();
    virtual ~CustomerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CustomerConfig members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAliases() const;
    bool aliasesIsSet() const;
    void unsetAliases();
    void setAliases(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DatabaseConfig> getDatabase() const;
    bool databaseIsSet() const;
    void unsetDatabase();
    void setDatabase(std::shared_ptr<DatabaseConfig> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<S3Config> getS3Config() const;
    bool s3ConfigIsSet() const;
    void unsetS3_config();
    void setS3Config(std::shared_ptr<S3Config> value);

protected:
    utility::string_t m_Aliases;
    bool m_AliasesIsSet;
    std::shared_ptr<DatabaseConfig> m_Database;
    bool m_DatabaseIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<S3Config> m_S3_config;
    bool m_S3_configIsSet;
};

}
}
}
}

#endif /* CustomerConfig_H_ */
