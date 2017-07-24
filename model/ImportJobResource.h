/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ImportJobResource.h
 *
 * 
 */

#ifndef ImportJobResource_H_
#define ImportJobResource_H_


#include "ModelBase.h"

#include "ImportJobOutputResource.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ImportJobResource
    : public ModelBase
{
public:
    ImportJobResource();
    virtual ~ImportJobResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ImportJobResource members

    /// <summary>
    /// The id of the category to assign all questions in the import to
    /// </summary>
    utility::string_t getCategoryId() const;
        void setCategoryId(utility::string_t value);
    /// <summary>
    /// The date the job was created in seconds since unix epoc
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The id of the job
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int64_t value);
    /// <summary>
    /// A name for this import for later reference
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// Error information from validation
    /// </summary>
    std::vector<std::shared_ptr<ImportJobOutputResource>>& getOutput();
    bool outputIsSet() const;
    void unsetOutput();
    void setOutput(std::vector<std::shared_ptr<ImportJobOutputResource>> value);
    /// <summary>
    /// The number of questions form the CSV file. Filled in after validation
    /// </summary>
    int64_t getRecordCount() const;
    bool recordCountIsSet() const;
    void unsetRecord_count();
    void setRecordCount(int64_t value);
    /// <summary>
    /// The status of the job
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(utility::string_t value);
    /// <summary>
    /// The date the job was last updated in seconds since unix epoc
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);
    /// <summary>
    /// The url of a CSV file to pull trivia questions from. Cannot be changed after initial POST
    /// </summary>
    utility::string_t getUrl() const;
        void setUrl(utility::string_t value);
    /// <summary>
    /// The vendor who supplied this set of questions
    /// </summary>
    utility::string_t getVendor() const;
        void setVendor(utility::string_t value);

protected:
    utility::string_t m_Category_id;
        int64_t m_Created_date;
    bool m_Created_dateIsSet;
    int64_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
        std::vector<std::shared_ptr<ImportJobOutputResource>> m_Output;
    bool m_OutputIsSet;
    int64_t m_Record_count;
    bool m_Record_countIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
    utility::string_t m_Url;
        utility::string_t m_Vendor;
    };

}
}
}
}

#endif /* ImportJobResource_H_ */
