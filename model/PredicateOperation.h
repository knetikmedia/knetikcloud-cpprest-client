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
 * PredicateOperation.h
 *
 * 
 */

#ifndef PredicateOperation_H_
#define PredicateOperation_H_


#include "ModelBase.h"

#include "Expression«object».h"
#include "Operator.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PredicateOperation
    : public ModelBase
{
public:
    PredicateOperation();
    virtual ~PredicateOperation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PredicateOperation members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Expression«object»>>& getArgs();
    bool argsIsSet() const;
    void unsetArgs();
    void setArgs(std::vector<std::shared_ptr<Expression«object»>> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Operator> getOperator() const;
    bool operatorIsSet() const;
    void unsetOperator();
    void setOperator(std::shared_ptr<Operator> value);

protected:
    std::vector<std::shared_ptr<Expression«object»>> m_Args;
    bool m_ArgsIsSet;
    std::shared_ptr<Operator> m_Operator;
    bool m_OperatorIsSet;
};

}
}
}
}

#endif /* PredicateOperation_H_ */
